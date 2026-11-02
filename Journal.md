# ITZ MY JOURNAL

# 27/10/2027
This was my first time using KiCad. I had used EasyEDA once before, so I had a little experience. After opening KiCad, I downloaded the XIAO ESP32C3 symbol and footprint. But I couldn't understand how to give it a label. I was like, wait, what!! What is meant by name and attach? Finally, I figured out that it basically means to write it out and just attach it. But you have to rename the files after unzipping the schematic symbol and footprint.

Anyways, the rest of the connections were easy for me because my previous experience with EasyEDA helped me a lot.

Then, after some time, I realized that I GOTTA MAKE A CHANGE. But just then, an idea came to my mind: I could just attach a battery. YEAA. But which battery? I spent some time researching which battery would be good and came up with a single 18650 Li-ion battery.

<img width="288" height="507" alt="image" src="https://github.com/user-attachments/assets/e210012e-6f7c-46cb-8690-59ca8291372b" />


The reason I chose a single battery was that I saw that two 18650 batteries output nearly 7.5V, which might mean I would need another buck converter to step down the voltage. And I didn't want that. But a single battery outputs nearly 4.5V, which I guess is enough to power up the ESP32 and my clock.

Then I added a 01x02 connector for the battery case. And here, 01 means 1 row and 02 means 2 pins in one row.
<img width="346" height="206" alt="image" src="https://github.com/user-attachments/assets/d43cd921-f50c-4137-8c68-558e789340b0" />


And now I have to add my footprints. AND HERE is the main problem I faced. I didn't know how to add footprints in KiCad. In EasyEDA, most of the footprints are already linked to the symbols, so I could directly move to the PCB layout. But then I clicked somewhere, and it showed me my footprint, as you can see.
<img width="975" height="548" alt="image" src="https://github.com/user-attachments/assets/a3e65b7e-4f3e-4696-bb87-96248ae9afdd" />


At first, I was like, "Wait, I can see the footprint, BUT WHERE IS THE BUTTON FOR ADDING THIS FOOTPRINT TO THE SYMBOL!!"

Then, after some time, I went to YouTube and searched for it. Finally, I understood how to add it. Then I added my footprints, and one thing I realized is that KiCad footprints are WAY MORE detailed than EASYEDA's.
<img width="975" height="548" alt="image" src="https://github.com/user-attachments/assets/8a7ef1f9-0042-4a22-bd9f-cc5a3a3daff1" />

# 31/10/2026
It's late at night now. And finally, the weekend has started, and my homework is almost finished. Now I sat down to continue my work.

SO I just realized that my PCB layout seems a bit big, as you can see.
<img width="765" height="503" alt="image" src="https://github.com/user-attachments/assets/3c1f77dc-fc98-4a6a-8af3-9eb8e990d529" />

So I decided to make it smaller because then it will fit into the body more easily. But again, I gotta wire some of the lines.
And this is the final smaller one
<img width="576" height="378" alt="Screenshot 2026-10-31 213352" src="https://github.com/user-attachments/assets/578e65f8-f024-4f1e-b584-20b4824871a4" />


Then came the Most challenging part, the cad. And I didn't even made one. so I first downloaded a stl file for a display from google and uploaded it into assembly then I aligned them.  AFter so many trial and error, I FINALLY made THE CAD. LET's GOO. 

<img width="992" height="703" alt="Screenshot 2026-11-02 135045" src="https://github.com/user-attachments/assets/168ae687-c6e3-4f31-a0b0-f752c6f762e5" />



And after that the firmware comes. But since i didn't had much time I just managed to display the time and wait not only that, also I made custom BUZZER SOUND. Its like you add frequency and which results in different sounds

ITZ finally finished...
