#include <stdio.h>

int main() {
    int prezzo;
    int totaleOriginale = 0;
    int totaleScontato = 0;
    int prodottoPiuCaro = -1, prodottoMenoCaro = -1;
    int count = 0;

    printf("Inserisci i prezzi in centesimi (0 per terminare):\n");

    while (1) {
        printf("Prezzo prodotto %d: ", count + 1);
        scanf("%d", &prezzo);

        if (prezzo == 0) break;

        if (prezzo < 0) {
            printf("Prezzo non valido, inserisci un valore positivo.\n");
            continue;
        }

        count++;
        int prezzoScontato;
        float sconto;

        if (prezzo < 100) {
            sconto = prezzo * 0.05;
            prezzoScontato = prezzo - (int)sconto;
            printf("  → Sconto 5%% applicato: %d centesimi\n", prezzoScontato);
        } else if (prezzo <= 500) {
            prezzoScontato = prezzo;
            printf("  → Nessuno sconto\n");
        } else {
            sconto = prezzo * 0.10;
            prezzoScontato = prezzo - (int)sconto;
            printf("  → Sconto 10%% applicato: %d centesimi\n", prezzoScontato);
        }

        totaleOriginale += prezzo;
        totaleScontato += prezzoScontato;

        if (prodottoPiuCaro == -1 || prezzo > prodottoPiuCaro) prodottoPiuCaro = prezzo;
        if (prodottoMenoCaro == -1 || prezzo < prodottoMenoCaro) prodottoMenoCaro = prezzo;
    }

    if (count == 0) {
        printf("Nessun prodotto inserito.\n");
        return 0;
    }

    printf("\n=== SCONTRINO FINALE ===\n");
    printf("Totale senza sconti: %d centesimi (%.2f euro)\n", totaleOriginale, totaleOriginale / 100.0);
    printf("Totale con sconti:   %d centesimi (%.2f euro)\n", totaleScontato, totaleScontato / 100.0);
    printf("Risparmio totale:    %d centesimi (%.2f euro)\n", totaleOriginale - totaleScontato, (totaleOriginale - totaleScontato) / 100.0);
    printf("Prodotto piu' caro:  %d centesimi (%.2f euro)\n", prodottoPiuCaro, prodottoPiuCaro / 100.0);
    printf("Prodotto meno caro:  %d centesimi (%.2f euro)\n", prodottoMenoCaro, prodottoMenoCaro / 100.0);

    return 0;
}