Este repositório contém uma série de exemplos de código em C++ que ilustram conceitos fundamentais da Programação Orientada a Objetos (POO).

1. Atividade 1: Definição e Criação de Classe Pessoa
Enunciado: Cria uma classe Pessoa com atributos para nome, idade, peso e altura.  Inclui um construtor para inicializar todos esses atributos, um método imprimirDados() para exibir as informações da pessoa de forma legível  e um método calcularIMC() que retorna o Índice de Massa Corporal (IMC) da pessoa, calculado pela fórmula IMC= 
altura×altura
peso
​
 . 



2. Atividade 3: Modificadores de Visibilidade e Encapsulamento (Classe Carro)
Enunciado: Desenvolve uma classe Carro com atributos para marca, modelo, ano e quilômetros rodados (inicializado com 0).  Os atributos marca, modelo e ano devem ser privados e acessados por métodos públicos (getters). Implementa um construtor que inicializa marca, modelo e ano. Adiciona um método público rodar(int km) que incrementa o valor de kmRodados  e um método mostrarInfo() para imprimir todas as informações do carro.




3. Atividade 4: Associação entre Objetos (Classes Pessoa e Endereco)
Enunciado: Implementa duas classes, Endereco (com atributos rua, numero, bairro, cidade, cep)  e Pessoa. A classe Pessoa deve conter um atributo que é um objeto da classe Endereco, demonstrando associação.  Ambas as classes devem ter construtores para inicializar seus respectivos atributos, sendo que o construtor de Pessoa recebe um objeto Endereco como parâmetro. A classe Pessoa também deve ter um método imprimirEndereco() que exibe o endereço completo da pessoa.



4. Atividade 5: Manipulação de Arrays de Objetos (Classe Produto)
Enunciado: Cria uma classe Produto com atributos para nome, preço e quantidade.  Implementa um construtor para inicializar os atributos de Produto. Desenvolve uma função adicionarProduto que recebe um vetor de Produto e os dados de um novo produto, adicionando-o ao vetor. Cria também uma função imprimirInventario() que percorre o vetor de produtos e imprime os dados de cada um. O inventário tem um tamanho máximo definido por MAX_PRODUTOS. 




5. Atividade 6: Validação de Dados (Classe Pessoa)
Enunciado: Implementa uma classe Pessoa com atributos para nome e idade.  O construtor da classe deve receber nome e idade, validando se a idade fornecida é maior ou igual a 0; caso contrário, a idade deve ser inicializada como 0.  Cria um método definirIdade(int novaIdade) que permite alterar a idade, mas também valida se o novo valor é não negativo antes de realizar a alteração.  Adiciona um método exibirPessoa() para imprimir o nome e a idade da pessoa. 


6. Atividade 7: Reuso de Código e Métodos (Classe Retangulo)
Enunciado: Desenvolve uma classe Retangulo com atributos para comprimento e largura.  Inclui um construtor que inicializa esses atributos. Implementa um método area() que calcula e retorna a área do retângulo (comprimento × largura)  e um método perimetro() que calcula e retorna o perímetro (2 × (comprimento + largura)). Adiciona um método exibirInfo() que imprime a área e o perímetro do retângulo, utilizando os métodos de cálculo internos para obter esses valores. 




7. Trabalho 2: Classe vs. Struct - Diferenças de Visibilidade
Enunciado: Compara o comportamento de acesso aos membros de uma struct (ProdutoStruct) e uma class (ProdutoClass) em C++ para representar um produto (com nome, preço, quantidade), quando nenhum modificador de visibilidade é explicitamente usado.  Demonstra que, ao tentar acessar e modificar os atributos diretamente, o acesso na struct funciona, mas na class gera erro. Explica que isso ocorre porque membros de struct são public por padrão, enquanto os de class são private por padrão. Mostra como corrigir o erro na class adicionando public: antes dos atributos, e discute se isso torna o comportamento equivalente ao da struct e os problemas de segurança em sistemas maiores ao deixar todos os atributos públicos.





8. Uso de Construtores e Destrutores (Classe ProdutoClass)
Enunciado: Modifica a classe ProdutoClass para incluir um construtor que recebe nome, preço e quantidade como parâmetros  e um destrutor que imprime uma mensagem indicando quando o objeto está sendo destruído. Instancia ao menos dois objetos da classe para observar o momento em que o destrutor é chamado. Discute o que acontece ao adicionar um construtor a uma struct Produto  e explica a importância de construtores e destrutores, especialmente em programas maiores. Aborda o que acontece com um objeto criado dentro de uma função se ele não for retornado ao final da execução da função.





9. Atividade 8: Gerenciamento de Objetos com Ponteiros (Estoque de Produtos)
Enunciado: Implementa um sistema de gerenciamento de estoque com as classes Produto e Estoque. A classe Produto possui atributos privados (nome, preço, quantidade) acessados por getters e setters. A classe Estoque armazena uma lista de produtos utilizando um vetor de ponteiros para objetos Produto. O Estoque deve ter um método para adicionar produtos, criando-os dinamicamente (recebendo nome, preço e quantidade), um método para listar os produtos cadastrados, e um destrutor que libera corretamente a memória alocada para os produtos. Demonstra a adição de produtos, listagem e a correta liberação de memória. Discute as consequências de não usar delete em objetos alocados dinamicamente e como isso afeta programas de grande escala.





10. Classe Ponto (Representação 2D)
Enunciado: Implementa a classe Ponto para representar um ponto no plano 2D com atributos privados x e y.  A classe deve incluir: um construtor que recebe as coordenadas x e y; um destrutor que exibe uma mensagem indicando a destruição do ponto; métodos públicos getX(), getY(), setX(), setY(); um método exibir() que imprime o ponto no formato (x,y); e um método distancia(Ponto outro) que calcula a distância euclidiana entre o ponto atual e outro ponto fornecido.



11. Classe Circulo (Composição com Ponto)
Enunciado: Cria uma classe Circulo que possui um centro (representado por um objeto da classe Ponto) e um raio.  Os atributos privados são centro (do tipo Ponto) e raio (um valor positivo). A classe deve incluir: um construtor que recebe as coordenadas do centro e o valor do raio (validando se o raio é positivo); um destrutor com mensagem indicando a destruição do círculo; e métodos públicos area() (retorna π⋅raio 
2
 ), circunferencia() (retorna 2⋅π⋅raio), exibir() (imprime o centro e o raio), e mover(dx, dy) que desloca o centro do círculo. Este exemplo demonstra composição de objetos e encapsulamento. 





12. Classe Triangulo (Composição com Múltiplos Pontos)
Enunciado: Desenvolve uma classe Triangulo composta por três objetos da classe Ponto (p1, p2, p3), que são atributos privados.  A classe deve incluir: um construtor que recebe as coordenadas dos três pontos para inicializar p1, p2 e p3; um destrutor com mensagem indicando a destruição do triângulo; e métodos públicos exibir() (imprime os três pontos), perimetro() (calcula a soma dos comprimentos dos três lados, usando o método distancia da classe Ponto), e tipo() (retorna uma string indicando se o triângulo é equilátero, isósceles ou escaleno, com base na comparação dos comprimentos dos lados). O exercício foca em composição complexa e lógica de classificação. 





13. Tarefa 4: Classe Ponto com Sobrecarga do Método distancia
Enunciado: Consolida o encapsulamento e construtores na classe Ponto (com atributos privados int x, y) e introduz a sobrecarga de métodos.  O método distancia deve ser sobrecarregado para aceitar:

Uma referência constante a outro objeto Ponto (const Ponto& outro).
Um ponteiro constante para outro objeto Ponto (const Ponto* outro).
Coordenadas x e y de outro ponto (int x, int y). Apenas uma das versões (preferencialmente a que recebe coordenadas) deve conter a lógica real do cálculo da distância, enquanto as outras duas devem chamar internamente essa versão para reutilizar o código.  A classe também inclui construtor, destrutor, getters, setters e método exibir. 

14. Classe Circulo com Composição e Sobrecarga do Método mover
Enunciado: Utiliza composição de objetos (a classe Circulo contém um objeto Ponto como centro e um atributo int raio) e explora a sobrecarga de métodos para a funcionalidade mover.  O método mover da classe Circulo deve ser sobrecarregado para permitir diferentes formas de especificar o novo centro:

mover(int dx, int dy): move o círculo por um deslocamento relativo (delta x, delta y).
mover(int novoX, int novoY): move o círculo para coordenadas absolutas. 
mover(Ponto* novoCentro): move o círculo para a posição de um Ponto fornecido por ponteiro. 
mover(const Ponto& novoCentro): move o círculo para a posição de um Ponto fornecido por referência.  Apenas uma das versões deve conter a lógica principal de alteração das coordenadas do centro, e as demais devem delegar a chamada a ela para promover a reutilização de código.  A classe também inclui construtor, destrutor, exibir, area e circunferencia. 


15. Tarefa 6: Herança e Polimorfismo com Formas Geométricas
Enunciado: Exercita conceitos de herança e polimorfismo em C++. 

Classe Abstrata Forma: Define uma classe base abstrata Forma com três métodos virtuais puros: getNomeForma() const, area() const, e perimetro() const. 
Classes Derivadas:
Circulo: Herda de Forma. Possui atributo raio. Implementa os métodos virtuais para retornar "Circulo", calcular área (π⋅raio 
2
 ) e perímetro (2⋅π⋅raio). 
Retangulo: Herda de Forma. Possui atributos largura e altura. Implementa os métodos virtuais para retornar "Retangulo", calcular área (largura × altura) e perímetro (2 × (largura + altura)). 
Triangulo: Herda de Forma. Possui atributos lado1, lado2, lado3. Implementa os métodos virtuais para retornar "Triangulo", calcular perímetro (soma dos lados) e área (usando a fórmula de Heron).
Função de Impressão: Uma função imprimirFormas(const std::vector<Forma*>& formas) (ou container similar) que percorre o vetor de ponteiros para Forma, imprimindo o nome, área e perímetro de cada forma de maneira polimórfica. 
16. Tarefa 7: Sistema de Acesso e Pagamento com Interfaces
Enunciado: Cria um sistema onde usuários podem se autenticar e realizar pagamentos, utilizando o conceito de interfaces (simuladas com classes abstratas em C++). 

Interface Autenticavel: Define um método virtual puro bool autenticar(const string& senha) const. 
Interface Pagavel: Define um método virtual puro void pagar(double valor). 
Classe Cliente: É uma classe concreta que implementa ambas as interfaces Autenticavel e Pagavel.  Deve ter uma senha e simular autenticação e pagamento. 

Classe Funcionario: É uma classe concreta que implementa apenas a interface Autenticavel.  Deve ter uma senha e simular autenticação.  O objetivo é demonstrar como classes podem aderir a diferentes contratos (interfaces), permitindo flexibilidade e polimorfismo.
