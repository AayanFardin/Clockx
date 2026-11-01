# ITZ MY JOURNAL


This was my first time using KiCad. I had used EasyEDA once before, so I had a little experience. After opening KiCad, I downloaded the XIAO ESP32C3 symbol and footprint. But I couldn't understand how to give it a label. I was like, wait, what!! What is meant by name and attach? Finally, I figured out that it basically means to write it out and just attach it. But you have to rename the files after unzipping the schematic symbol and footprint.

Anyways, the rest of the connections were easy for me because my previous experience with EasyEDA helped me a lot.

Then, after some time, I realized that I GOTTA MAKE A CHANGE. But just then, an idea came to my mind: I could just attach a battery. YEAA. But which battery? I spent some time researching which battery would be good and came up with a single 18650 Li-ion battery.

The reason I chose a single battery was that I saw that two 18650 batteries output nearly 7.5V, which might mean I would need another buck converter to step down the voltage. And I didn't want that. But a single battery outputs nearly 4.5V, which I guess is enough to power up the ESP32 and my clock.

Then I added a 01x02 connector for the battery case. And here, 01 means 1 row and 02 means 2 pins in one row.

And now I have to add my footprints. AND HERE is the main problem I faced. I didn't know how to add footprints in KiCad. In EasyEDA, most of the footprints are already linked to the symbols, so I could directly move to the PCB layout. But then I clicked somewhere, and it showed me my footprint, as you can see.

At first, I was like, "Wait, I can see the footprint, BUT WHERE IS THE BUTTON FOR ADDING THIS FOOTPRINT TO THE SYMBOL!!"

Then, after some time, I went to YouTube and searched for it. Finally, I understood how to add it. Then I added my footprints, and one thing I realized is that KiCad footprints are WAY MORE detailed than EASYEDA's.



It's late at night now. And finally, the weekend has started, and my homework is almost finished. Now I sat down to continue my work.

SO I just realized that my PCB layout seems a bit big, as you can see.

So I decided to make it smaller because then it will fit into the body more easily. But again, I gotta wire some of the lines.

Then came the Most challenging part, the cad. And I didn't even made one. so I first downloaded a stl file for a display from google and uploaded it into assembly then I aligned them.  AFter so many trial and error, I FINALLY made THE CAD. LET's GOO. 



And after that the firmware comes. But since i didn't had much time I just managed to display the time and wait not only that, also I made custom BUZZER SOUND. Its like you add frequency and which results in different sounds
