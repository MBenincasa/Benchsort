# Installazione su Linux
Scarica la repository sul tuo terminale. Da shell digita il comando make nella cartella source. Digitare ./benchsort.out

# Benchsort
Un programmino che testa alcuni algorirmi di ordinamento.
E' stato usato un processore intel i5 1.80 GHz

| Algoritmo | 1.000 numeri | 10.000 numeri | 100.000 numeri | 1.000.000 numeri |
|-----------|--------------|---------------|----------------|------------------|
| quicksort | 255 us | 3.3 ms | 38.4 ms | 195.3 ms |
| mergesort | 355 us | 3.5 ms | 40.9 ms | 241.8 ms |
| insertionsort | 1.4 ms | 124 ms | 6.3 sec | 10.49 min |
| selectionsort | 2.5 ms | 117 ms | 10.8 sec | 19.17 min |
| bubblesort | 4.5 ms | 315 ms | 36.4 sec | 60.28 min |
