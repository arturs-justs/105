g = 9.81

v0 = 0 # sākotnēji bumba atrodas miera stāvoklī
t = 0.1 # laiks no bumbas atlaišanas brīža ir tikai 0.1 sekunde
y = v0 - 0.5*g*t**2 # aprēķinātā bumbas pozīcija uz y ass
print (y) # iegūstam rezultātu uz ekrāna

t = 1 # kas notiks pēc vienas sekundes?
y= 0*t - 0.5*g*t**2
print (y)

v0 = 5 # bumba tiek pamesta gaisā ar ātrumu 5 m/s
t = 0.7 # kas notiks pēc 0.7 sekundēm?
y = v0*t - 0.5*g*t**2
print (y)
