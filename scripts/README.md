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



## mled-iowait, mled-iowaitdetailed ##

My home server doesn't have any LEDs for HDD activity, though it has plenty of HDDs.
These two scripts attempt to make up for this shortcoming when I need some quick profiling of the machine.
They actually work better than common HDD activity LEDs because they are based on iowait percentage in one
second periods (adjustable).

`mled-iowait` has 3 levels, so you get only to set a low and a high threshold.
`mled-iowaitdetailed` has 6 levels of activity, so you can set 5 thresholds. Also below the lowest threshold,
it sets the notifier to off, which turns to be a good approach.
