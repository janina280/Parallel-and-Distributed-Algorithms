# Procesarea de text (en. Text Processing)

APD (MPI-Message Passing Interface)

Varianta secvențială + date

Topicul:

Procesarea de text (en. Text Processing)

Numărarea frecvenței cuvintelor dintr-un fișier text mare pot fi paralelizate prin procesarea diferitelor părți ale fișierului pe fire sau procesoare separate.

Limbajele de programare utilizate:
C++

Sistemele si/sau framework-urile folosite:
STL

Informații despre mașinile pe care am rulat codul:

-Sistemul de operare:  Windows 11 Home;

-Procesorul (CPU):  AMD Ryzen 7 7735HS with Radeon Graphics           3.20 GHz;

-Memoria RAM:16.0 GB ;

-Spațiul de stocare: SSD 512 GB;

-Compilatorul sau mediul de dezvoltare utilizat: Visual Studio 2022, Online C++ Compiler.

Rezultatele experimentale:
Input1: Ana are mere, pere si capsuni. Maria are mere, gutui si caise.

1.https://www.onlinegdb.com/online_c++_compiler# : Time taken by function: 40 microseconds

2.Visual Studio 2022: Time taken by function: 470 microseconds


Input2:Algoritmii paraleli reprezintă o ramură a informaticii și a teoriei calculului care se ocupă cu dezvoltarea și analiza algoritmilor care pot fi executați simultan pe mai multe procese sau unități de calcul. Acești algoritmi sunt esențiali în contextul sistemelor moderne de calcul paralel și distribuit, precum și în domenii precum învățarea automată, simulările complexe, analiza de date masive și grafica computerizată.

Conceptul de paralelism în calcul se referă la capacitatea de a efectua mai multe operațiuni în același timp, ceea ce poate duce la o creștere semnificativă a performanței și eficienței sistemelor informatice. În timp ce algoritmii secvențiali lucrează într-o manieră liniară, parcurgând pașii unul câte unul, algoritmii paraleli își împart sarcinile în bucăți mai mici care pot fi executate în paralel.

Există mai multe modele și paradigme de calcul paralel, precum:

Procesare SIMD (Single Instruction, Multiple Data): Acest model implică execuția simultană a aceleiași instrucțiuni pe multiple seturi de date. Este frecvent utilizat în aplicații precum procesarea de imagini sau simulările fizice.

Procesare MIMD (Multiple Instruction, Multiple Data): În acest model, fiecare proces sau unitate de calcul poate executa instrucțiuni diferite pe date diferite. Este utilizat în sisteme distribuite sau în calculul paralel general.

Modelul producer-consumator: Acest model implică divizarea sarcinilor în producători care generează date și consumatori care prelucrează acele date. Este folosit în situații în care sunt implicate operațiuni asincrone și comunicații între diferite procese sau thread-uri.

Modelul de flux de date: În acest model, operațiunile sunt organizate ca un flux de date, cu date care circulă între operații și sunt prelucrate pe măsură ce sunt disponibile. Este folosit în special în procesarea semnalului și a imaginii.

Implementarea și eficiența algoritmilor paraleli pot fi influențate de mai mulți factori, inclusiv arhitectura hardware, scalabilitatea sistemului, sincronizarea și gestionarea resurselor. De asemenea, dezvoltarea algoritmilor paraleli necesită adesea o înțelegere profundă a teoriei calculului paralel și a structurilor de date eficiente pentru a optimiza performanța și a evita conflictele de date și condițiile de cursă.

În concluzie, algoritmii paraleli reprezintă o unealtă esențială în dezvoltarea de sisteme de calcul eficiente și scalabile, jucând un rol crucial în îmbunătățirea performanței și în realizarea aplicațiilor complexe în diverse domenii ale științei și tehnologiei moderne.

Time taken by function: 2522 microseconds

