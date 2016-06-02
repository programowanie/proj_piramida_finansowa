###**Piramida szał natura**

*Małomiejskie problemy*

*Pragnienie zarobku*

*Brak edukacji*

*Zaduch*

*Chłopski los*

*Naiwność od 0 do 15500*

*Posłuszeństwo*

*n-1 sąsiadów*

*Brak skrupułów*

*Piramida finansowa*

>./piramida_finansowa 5000 5 1000 50 500 3000

*Śmierć.*



####**Projekt Piramida Finansowa**
ma zasymulować różne typy piramidy finansowej na przykładzie małego państwa na wyspie pośrodku Pacyfiku.

Projekt opiera się na uproszonym modelu społeczeństwa, w którym każdy ma jakąś sumę pieniędzy w kieszeni i może nią dysponować oraz wpływa ona na jego postrzeganie rzeczywistości (im więcej ma pieniędzy, tym mniej łatwowierny jest).

W piramidzie finansowej mogą brać udział obywatele w wieku powyżej 5 lat (do 30, gdyż w wieku 30 lat obywatel automatycznie umiera).

Niektóre dane, jak zamożność czy powodzenie werbunku do piramidy, są losowe.
Na inne dane można (w pewnym stopniu w niektórych przypadkach) wpływać przez argumenty wiersza poleceń.
#####Schemat:

>./piramida_finansowa *populacja* *stopień* *wpłata* *zwrot* *pieniądze początkowe* *granica naiwności*

Gdzie:

- '*populacja*' oznacza rozmiar społeczeństwa do badania, np. 7000.

- '*stopień*' oznacza liczbę osób poinformowanych o piramidzie przez każdego członka. Nie jest to równoważne z przystąpieniem nowej osoby do piramidy finansowej. Przykładowy stopień to 6.

- '*wpłata*' to suma pieniędzy wpłacana jednorazowo przez każdego uczestnika piramidy finansowej. Na przykład 1000.

- '*zwrot*' to suma pieniędzy otrzymywana przez członków piramidy co roku. Dla przykładu, 50.

- '*pieniądze początkowe*' to suma pieniędzy gwarantowanych dla każdego obywatela. Każdy dodatkowo dostaje losową sumę z przedziału <0, 9999>. Suma pieniędzy na koncie wpływa na naiwność obywatela. Przykładowa suma początkowa to 500.

- '*granica naiwności*' to liczba, która decyduje o tym, czy osoba przystępuje do piramidy finansowej, czy nie. Im większa liczba, tym mniej osób do niej przystępuje. Maksymalna wartość to 15499, która jest niemal niemożliwa do osiągnięcia (piramida nie zadziała). Przykładowa wartość to 4000.

#####Przykładowe sensowne dane

>./piramida_finansowa 50000 5 1000 50 500 3000
