## Métodos de Ordenação
Este repositório fornece implementações dos seguintes métodos de ordenação em várias linguagens de programação:

## [Bubble Sort](bubble Sort.c)
O Bubble Sort é um algoritmo de ordenação simples que funciona comparando pares de elementos adjacentes e trocando-os se estiverem fora de ordem. Este processo é repetido até que nenhuma troca seja necessária. Embora seja fácil de entender, não é eficiente para grandes conjuntos de dados.

## [Selection Sort](Selection Sort.c)
O Selection Sort é outro algoritmo de ordenação simples que divide a lista em duas partes: a parte ordenada e a parte não ordenada. Ele encontra o menor elemento na parte não ordenada e o coloca na parte ordenada. Esse processo é repetido até que toda a lista esteja ordenada.

## [Insertion Sort](Insertion Sort.c)
O Insertion Sort funciona construindo uma lista ordenada um elemento de cada vez. Ele percorre a lista e, para cada elemento, o insere no local correto na lista ordenada. É eficiente para listas pequenas, mas não é recomendado para listas muito grandes.

## [Merge Sort](Merge Sort.c)
O Merge Sort é um algoritmo de ordenação dividir para conquistar. Ele divide a lista em várias sublistas, ordena cada sublista e, em seguida, combina as sublistas ordenadas para obter a lista final ordenada. É eficiente e estável.

## [Quick Sort](Quick Sort.c)
O Quick Sort também é um algoritmo de ordenação dividir para conquistar. Ele escolhe um elemento como pivô, divide a lista em duas partes (elementos menores e elementos maiores que o pivô) e, em seguida, ordena recursivamente essas partes. É geralmente rápido na prática.

## [Radix Sort](Radix Sort.c)
O Radix Sort é um algoritmo de ordenação que funciona ordenando os elementos com base nos dígitos individuais. Ele começa ordenando os elementos com base no dígito menos significativo e depois trabalha em direção ao dígito mais significativo. É especialmente eficiente para ordenar números inteiros.

## [Shell Sort](Shell Sort.c)
O Shell Sort é uma extensão do Insertion Sort que funciona comparando elementos distantes uns dos outros e, em seguida, reduzindo a distância entre os elementos a serem comparados. Isso resulta em um algoritmo mais eficiente do que o Insertion Sort em listas maiores.

## [Counting Sort](Counting Sort.c)
O Counting Sort é um algoritmo de ordenação que funciona contando o número de elementos que têm um valor menor ou igual a cada valor possível na lista de entrada. Com base nesses contagens, os elementos são então colocados em suas posições corretas na lista ordenada. É eficiente para listas de números inteiros com intervalos limitados.

## [Heap Sort](Heap Sort.c)
O Heap Sort é um algoritmo de ordenação que usa uma estrutura de dados chamada heap. Ele converte a lista em uma árvore heap, que é uma estrutura binária especial, e então remove o elemento máximo repetidamente para construir a lista ordenada. É eficiente e tem uma complexidade de tempo garantida.

Cada pasta neste repositório contém implementações desses métodos de ordenação em várias linguagens de programação. Sinta-se à vontade para explorar e usar essas implementações em seus próprios projetos, dependendo das suas necessidades de ordenação e linguagem de programação preferida.
