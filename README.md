# C++ beolvasás és ellenőrzés

Függvény beolváshoz, minden adattípussal működik, amivel progalapon találkozni lehet.
## Használat
Először másold be a kódot a cpp fájlba a main függvény elé.
### Sima beolvasás
```
beolvas(n);
```
Itt n egy tetszőleges változó, amibe beolvassuk az értéket. n lehet bármilyen típusú változó és csak megfelelő típust fogad el a program bemeneti értéknek.
### Példa
```
int szam;
beolvas(szam);
cout << szam;
```
Bemenet|Kimenet
---|---
1|1
22|22
a|"Nem megfelelo erteket adtal meg."
1.1|"Nem megfelelo erteket adtal meg."

### Minimum és maximum értékek
A beolvas függvénnyel minimum és maximum értékre is tesztelhetünk, ehhez plusz paramétereket kell megadni. Az első paraméter a minimum, a második a maximum. Ha csak maximumot akarsz, akkor add meg a típus minimum értékét. Ha char értéket vár a függvény, akkor a min és max értékek abc rendben határolják be az elfogadható bemenetet.
### Példa
```
double szam;
beolvas(szam, 0, 50.5);
cout << szam;
```
Bemenet|Kimenet
---|---
1|1
22.2|22.2
-1|"Nem megfelelo erteket adtal meg."
50.5|50.5
50.6|"Nem megfelelo erteket adtal meg."
