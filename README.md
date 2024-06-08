# Bubble-Sort

Bem-vindo ao repositório de estudos do Bubble Sort em C! Este repositório foi criado com o objetivo de estudos e uma compreensão clara e detalhada do algoritmo Bubble Sort, Como um metodo meu para estudos vou Fazer o meu primeiro repositório de estudos.

# O que é Bubble Sort e Porque eu estudar?

O Bubble Sort é um algoritmo de ordenação simples, fácil de entender e implementar, sendo frequentemente utilizado para fins educacionais. Sua principal característica é a comparação e troca de elementos adjacentes, repetindo esse processo até que todos os elementos estejam ordenados. Pense nele como uma série de "bolhas" que vão subindo ao topo até que tudo esteja ordenado.

O Bubble Sort é ótimo para quem está começando a aprender sobre algoritmos, devido à sua facilidade de aprendizagem. É super simples de entender e fácil de implementar, tornando-se um excelente ponto de partida para iniciantes.

Além disso, o Bubble Sort ensina princípios básicos que são fundamentais para algoritmos mais complexos. A compreensão dos conceitos de comparação e troca de elementos em um algoritmo de ordenação simples como este é crucial para o estudo de técnicas mais avançadas.

Apesar de não ser o algoritmo mais rápido para grandes conjuntos de dados, o Bubble Sort é eficiente o suficiente para pequenas listas e ideal para fins educacionais. Ele oferece uma base sólida para entender os fundamentos da ordenação antes de avançar para métodos mais eficientes e sofisticados.

# Funcionamento Básico

O funcionamento do Bubble Sort é baseado na comparação dos elementos da lista e na troca de posição dos mesmos quando necessário para atingir a ordenação pretendida. Ele atua localmente, ou seja, pode alterar a própria lista de entrada.
Passo a Passo do Algoritmo

    1. Percorra a lista da esquerda para a direita.
    2. Compare cada elemento com o elemento adjacente à sua direita.
    3. Se o elemento à esquerda for maior que o elemento à direita, troque-os de posição.
    4. Repita os passos 1 a 3 até que a lista esteja ordenada.

*Exemplo Sem Código.*

Imagine que você tem uma lista de números: [5, 3, 8, 4, 2].

    Primeira Passagem:
        Compare 5 e 3. Troque-os, a lista fica [3, 5, 8, 4, 2].
        Compare 5 e 8. Não troque.
        Compare 8 e 4. Troque-os, a lista fica [3, 5, 4, 8, 2].
        Compare 8 e 2. Troque-os, a lista fica [3, 5, 4, 2, 8].

    Segunda Passagem:
        Compare 3 e 5. Não troque.
        Compare 5 e 4. Troque-os, a lista fica [3, 4, 5, 2, 8].
        Compare 5 e 2. Troque-os, a lista fica [3, 4, 2, 5, 8].
        Compare 5 e 8. Não troque.

    Terceira Passagem:
        Compare 3 e 4. Não troque.
        Compare 4 e 2. Troque-os, a lista fica [3, 2, 4, 5, 8].
        Compare 4 e 5. Não troque.
        Compare 5 e 8. Não troque.

    Quarta Passagem:
        Compare 3 e 2. Troque-os, a lista fica [2, 3, 4, 5, 8].
        Compare 3 e 4. Não troque.
        Compare 4 e 5. Não troque.
        Compare 5 e 8. Não troque.

*A lista agora está ordenada: [2, 3, 4, 5, 8].*

# Agora Como fazer em Qualquer linguagem de Programação

*Para modos de aprendizado vamos usar C*

Para começar, vamos incluir as bibliotecas #include <stdio.h> e #include <stdbool.h>. A biblioteca stdbool.h em C é responsável por fornecer suporte para o tipo booleano e seus valores true e false.

```c
#include <stdio.h>
#include <stdbool.h>
```
Agora, vamos focar no principal objetivo, que é trocar os valores de duas variáveis, a e b, invertendo-os. Para isso, criaremos uma função chamada troca que realizará essa inversão.

```c
void troca(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
```

A função troca é usada para trocar os valores de duas variáveis inteiras. Primeiro, ela armazena o valor da variável apontada por a em uma variável temporária chamada temp. Em seguida, ela atribui o valor da variável apontada por b à variável apontada por a, efetivamente copiando o valor de b para a. Finalmente, a função atribui o valor armazenado em temp à variável apontada por b, completando a troca dos valores. Assim, após a execução da função, os valores das duas variáveis são trocados entre si.


#Bubble Sort!!

Agora o Motivo de todo esse repositorio que é a função bubble que vai comparar os numeros da lista array e organizalos
```c
void bubbleSort( int arr[], int tamanhoarr){
    int i, j;
    bool snap;
```
A função `bubbleSort` Ela recebe dois parâmetros: `arr`, que é o array a ser ordenado, e `tamanhoarr`, que é o número de elementos no array. Dentro da função, duas variáveis de controle, `i` e `j`,sempre usadas para controle de laços e arrays seram usados para iterar através dos elementos do array. Uma flag booleana chamada `snap` é utilizada para monitorar se houve alguma troca de elementos durante cada passagem pelo array.

```c
for(i = 0; i < tamanhoarr - 1; i++){
        snap = false;
        for(j = 0; j < tamanhoarr - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                troca(&arr[j], &arr[j + 1]);
                snap = true;
            }
        }
        if (snap == false){
            break;
        }
    }
```
O primeiro laço, identificado pela variável de controle i, percorre o array de números várias vezes. Ele é responsável por controlar o número de iterações necessárias para garantir que todos os elementos estejam na posição correta.

O loop começa com i igual a 0 e continua até que i seja menor do que tamanhoarr - 1, onde tamanhoarr é o número total de elementos no array. A condição i < tamanhoarr - 1 é usada porque, após cada iteração, o maior elemento já estará na posição correta no final do array, então não é necessário continuar até o final.

*Assim deixando que o Segundo laço faça a troca de valores com a nossa função 'troca'.*
O segundo laço, controlado pela variável de iteração `j`, percorre o array durante cada passagem realizada pelo primeiro laço. Sua função principal é comparar elementos adjacentes e realizar a troca de posição se necessário.

A variável `j` é inicializada com 0 e o loop continua até que `j` seja menor do que `tamanhoarr - i - 1`. Aqui está o significado de cada parte dessa condição:

- `tamanhoarr - i - 1`: Isso garante que o loop interno não percorra elementos que já foram ordenados no final do array. A subtração de `i` é importante porque, após cada passagem completa do loop externo, o maior elemento já estará na sua posição correta no final do array, então não há necessidade de compará-lo novamente.

Durante cada iteração desse segundo loop, ele compara o elemento atual (`arr[j]`) com o próximo elemento (`arr[j + 1]`). Se o elemento atual for maior do que o próximo, significa que eles estão fora de ordem, então ocorre a troca de posição entre eles.

A variável `snap` é uma flag booleana que indica se houve alguma troca de elementos durante a passagem atual pelo array. Ela é inicializada como `false` antes de cada passagem pelo array. Se ocorrer uma troca de elementos durante o segundo loop, a flag `snap` é alterada para `true`, indicando que pelo menos uma troca ocorreu durante a passagem.

A função da variável `snap` é importante para otimizar o algoritmo. Se durante uma passagem completa pelo array nenhuma troca ocorrer (ou seja, `snap` permanecer `false`), isso significa que o array já está ordenado e não há necessidade de continuar as iterações. Nesse caso, o primeiro loop (externo) é interrompido usando a instrução `break`, economizando tempo de processamento.


