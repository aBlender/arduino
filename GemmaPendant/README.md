# Trinket / Gemma 8-bit Pendant

This is a modified version of the code from this project: 
https://learn.adafruit.com/trinket-slash-gemma-space-invader-pendant

Added features:
* 3 custom animations that slide in and slide out
* Watch dog timer that wakes the mcu about every 40 seconds
  - This attracts much more attention than having to press the button to start the animation, although the button also still works to interrupt the sleep cycle
* Automatic cycling through the 3 different animations via the watch dog timer or the hardware button interrupt.

Animations were made using [Piskel](https://piskelapp.com) and then translated into binary:
* [Space Invaders](https://www.piskelapp.com/p/agxzfnBpc2tlbC1hcHByEwsSBlBpc2tlbBiAgMDg1PP_Cgw/view)
* [Heart](https://www.piskelapp.com/p/agxzfnBpc2tlbC1hcHByEwsSBlBpc2tlbBiAgMCgvr-vCAw/view)
* [Pacman Ghost](https://www.piskelapp.com/p/agxzfnBpc2tlbC1hcHByEwsSBlBpc2tlbBiAgIC_2u_NCQw/view)

## Demo Video
[![Demo of Gemma 8-bit Pendants](https://img.youtube.com/vi/lNHHanCintE/0.jpg)](https://www.youtube.com/watch?v=lNHHanCintE)
