    char nomeCidadeB[] = "Rio de Janeiro";
    int populacaoB = 6748000;
    float areaB = 1200.25;
    float pibB = 300.50;
    int pontosTuristicosB = 30;

    // Comparação de Cartas
    printf("Comparando População:\n");
    if (populacaoA > populacaoB) {
        printf("%s tem maior população que %s.\n", nomeCidadeA, nomeCidadeB);
    } else {
        printf("%s tem maior população que %s.\n", nomeCidadeB, nomeCidadeA);
    }

    printf("\nComparando Área:\n");
    if (areaA > areaB) {
        printf("%s tem maior área que %s.\n", nomeCidadeA, nomeCidadeB);
    } else {
        printf("%s tem maior área que %s.\n", nomeCidadeB, nomeCidadeA);
    }

    printf("\nComparando PIB:\n");
    if (pibA > pibB) {
        printf("%s tem maior PIB que %s.\n", nomeCidadeA, nomeCidadeB);
    } else {
        printf("%s tem maior PIB que %s.\n", nomeCidadeB, nomeCidadeA);
    }

    printf("\nComparando Pontos Turísticos:\n");
    if (pontosTuristicosA > pontosTuristicosB) {
        printf("%s tem mais pontos turísticos que %s.\n", nomeCidadeA, nomeCidadeB);
    } else {
        printf("%s tem mais pontos turísticos que %s.\n", nomeCidadeB, nomeCidadeA);
    }

    return 0;
}
