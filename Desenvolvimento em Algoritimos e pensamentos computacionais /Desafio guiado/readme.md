# Desafio de Monitoramento de Temperatura



# Indeficaçao

<Li>Aluno: Victor Daniel Jesus de Sousa</Li>
<Li>Disciplina: Desenvolvimento em Algoritimos e pensamentos computacionais</Li>
<Li>Professor(a): Karla Sartin</Li>
<Li>Titulo do projeto:  Sistema de Monitoramento de Temperatura </Li>





<h1> Obejtivo</h1>

---
<p>Desenvolver, em lingugem C, um programa que monitore a temperatura de uma maquina, utilizando laços de repetiçao while e/ou do..while, com validaçao de entradas, calculos condiçoes de segurança e relatorio final.</p>




# Estruturas de repetição utilizadas

<p>O programa utiliza as estruturas do...while e while.

O do...while é utilizado para solicitar o limite de temperatura. Essa estrutura foi escolhida porque o programa precisa executar a solicitação pelo menos uma vez antes de verificar se o valor informado é válido.

O while é utilizado para realizar o monitoramento das temperaturas. Ele permite que o programa continue recebendo leituras enquanto não ocorrerem três temperaturas consecutivas acima do limite.

A combinação das duas estruturas permite realizar tanto a validação inicial do limite quanto o monitoramento contínuo das temperaturas.

</p>
<h1> O que o programa deve fazer?</h1>

<li> Solicitar e validar o limiter de temperatura</li>
<li> Receber diversas temperaturas de sensor</li>
<li> Tratar entrada invalidas </li>
<li> Calcular media, maior, e menor temperatura </li>
<li> Contar quantas temperaturas ficaram acima do limite</li>

# Funcionamento do programa

<p>Primeiramente, o usuário informa um limite de temperatura entre 0 °C e 100 °C. O programa valida esse valor e, caso seja inválido, solicita uma nova entrada.

Depois disso, o programa começa a receber as leituras de temperatura. Os valores devem estar entre 0 °C e 100 °C. O valor -1 pode ser utilizado para encerrar o monitoramento manualmente.

Quando uma temperatura inválida é informada, o programa exibe uma mensagem de erro e solicita uma nova temperatura, sem considerar o valor inválido nos cálculos.

A cada temperatura válida, o programa verifica se ela está acima do limite definido. Quando isso acontece, o contador de temperaturas consecutivas acima do limite é aumentado.

Quando uma temperatura está dentro do limite, o contador de temperaturas consecutivas é reiniciado para zero.

Caso sejam registradas três temperaturas consecutivas acima do limite, o programa apresenta um alerta e encerra automaticamente o monitoramento.

Durante o monitoramento, o programa também armazena informações para calcular a média, identificar a maior e a menor temperatura, contar quantas temperaturas ficaram acima do limite e calcular o percentual dessas temperaturas.

 </p>

