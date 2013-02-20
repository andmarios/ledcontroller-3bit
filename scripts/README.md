# Bash Scripts #

I teared the notifier apart and placed the notifier's board inside my home server.
Due to its size, the RGB LED creates some interesting optical effects if you place it 2-4cm
behind the venting holes.

Here are some simple scripts that use various data to set the LED's color.



## mled-discomode ##

This script simply cycles through all available colors. I called it disco mode due to the optical
phenomena that take place as the light crosses the air vents.



## mled-cputemp ##

This script works really well for my machine. It uses the `sensors` program to get the CPU
temperature.

If the CPU is at or under the low threshold, the LED turns blue. If it is at or above the
high threshold, the LED turns red. If it is in the middle, it gets green.

It is actually very informative for the machine's state. You can easily detect CPU load.
