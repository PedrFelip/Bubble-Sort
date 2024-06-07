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
