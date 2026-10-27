// Busy-wait loops in Sonic Generations, made to give the core away while they wait.
//
// The console has six hardware threads, one per software thread, so a loop that spins until another
// thread finishes its work costs nothing there. On a PC (and much more on a phone) it takes a core
// from the very threads it waits for. Both are mid-assembly hooks of sonicgenerations_manifest.toml.
//
// Ported from the working iOS port (Player124413/SonicGenerations-iOS, src/spin_waits.cpp): there
// they gave back 79 % of one thread in Green Hill.

#include <chrono>
#include <thread>

#ifdef _WIN32
#include <windows.h>
#else
#include <sched.h>
#endif

namespace {

void YieldOnce() {
#ifdef _WIN32
  SwitchToThread();
#else
  sched_yield();
#endif
}

}  // namespace

// Havok's job queue (0x83362D84): the submitting thread spins until the worker threads' completion
// count reaches the job count.
void SgHavokJobWait() {
  YieldOnce();
}

// D3D's wait for the GPU (0x82DB0A34, once per poll in the loop that every ring-buffer and fence
// wait runs): about a third of the game thread on the console's clocks. The GPU thread needs the
// core, so a short sleep costs less than spinning.
void SgGpuWaitPoll() {
  std::this_thread::sleep_for(std::chrono::microseconds(30));
}
