# GameBoy Emulator written in C
My ambitious and hopeful implementation of GameBoy emulator.
Above all this is an educational project.

## TODO
### ~~Phase 0: Basic Setup~~ ✅Done
- ~~Basic structs/types for parts of the system~~
- ~~CPU registers~~
- ~~Structure for memory~~
- ~~Load ROM function~~
- ~~Set up automated testing~~
---
### Phase 1: CPU & MMU ◀️
Before proceeding with implementation, I need to consider the approach here.
It might be a good idea to pick a subset of instructions to implement first, for example the ones needed for Tetris or a simple ROM like that.
Also, although standalone implementation of CPU instruction set is the goal here, I still need to keep in mind the clock cycles and potential tick() mechanism
that will be needed for syncing with the rest of the system.
- Fetch-decode-execute loop (main emulator loop)
- Implement full CPU instruction set
- Implement a solid memory map and MMU
- Build simple logging and debugging tools as I go along
---
### Phase 2: PPU
- Get something on screen
- ...
---
### Phase 3: Adding Interaction, Input & Timers
- Implement controls
- Timers
- Interrupts
### Phase 4: MBCs
...
---
### Phase 5: Sound and Polish
...

