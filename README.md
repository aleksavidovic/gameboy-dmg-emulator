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
- Implement MMU
    - MMU struct with separate memory regions
    - ~~Init operation (with ROM loading)~~
    - Read operation
    - Write operation
- Fetch-decode-execute loop (main emulator loop)
- Implement full (probably a subset at first) CPU instruction set
- Build simple logging and debugging tools as needed
- Write unit tests for opcodes
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

