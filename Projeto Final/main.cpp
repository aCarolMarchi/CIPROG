#include <iostream>
#include <iomanip>
using namespace std;


// função de exibição do preço do aluguel SEM os descontos de forma de pagamento
float exibirPrecoAluguel(float tamanhoCTA, int diasAluguel){
  float precoAluguel;
  int frete = 12;

  cout << fixed << setprecision(2);

  // preço aluguel tamanho 1 ao 2
  if (tamanhoCTA <= 2) {
    if (diasAluguel > 0 && diasAluguel <= 15) {
      precoAluguel = (tamanhoCTA * 15) * 5 + frete;
    } else if (diasAluguel > 15 && diasAluguel <= 30) {
      precoAluguel = (tamanhoCTA * 30) * 4.5 + frete;
    } else if (diasAluguel > 30 && diasAluguel <= 60) {
      precoAluguel = (tamanhoCTA * 40) * 4.5 + frete; 
    }
  } 
  
  // preço aluguel tamanho 3 ao 4
  else if (tamanhoCTA > 2 && tamanhoCTA <= 4) {
    if (diasAluguel > 0 && diasAluguel <= 15) {
      precoAluguel = (tamanhoCTA * 15) * 4.5 + frete;
    } else if (diasAluguel > 15 && diasAluguel <= 30) {
      precoAluguel = (tamanhoCTA * 30) * 4 + frete;
    } else if (diasAluguel > 30 && diasAluguel <= 60) { 
      precoAluguel = (tamanhoCTA * 40) * 3.5 + frete; 
    }
  }

  // preço aluguel tamanho 5 ao 7
  else {
    if (diasAluguel > 0 && diasAluguel <= 15) {
      precoAluguel = (tamanhoCTA * 15) * 4 + frete;
    } else if (diasAluguel > 15 && diasAluguel <= 30) {
      precoAluguel = (tamanhoCTA * 30) * 3 + frete;
    } else if (diasAluguel > 30 && diasAluguel <= 60) { 
      precoAluguel = (tamanhoCTA * 40) * 2.5 + frete; 
    }
  }

  return precoAluguel;
}

// função de exibição dos documentos caninos necessários p/ viagens aéreas
void exibirDocumentosNecessarios() {
  cout << "\n\n\n         DOCUMENTOS DOGUÍNEOS NECESSÁRIOS PARA VIAGENS AÉREAS         \n\n\n";
  cout << "     * P/ VOOS NACIONAIS:\n\n> Atestado médico emitido por um veterinário até 10 dias antes do voo\n> Comprovante vigente de vacina antirrábica aplicada pelo menos 30 dias antes do voo\n\n";
  cout << "     * P/ VOOS INTERNACIONAIS:\n\n> Atestado médico emitido por um veterinário até 10 dias antes do voo\n> Certificado Zoossanitário Internacional (CZI) emitido pelas autoridades sanitárias do país de origem da sua viagem ou de procedência do seu animal.";
};
 
// função de exibição do FAQ
void exibirFAQ() {
  cout << "\n\n\n                   FREQUENTLY ASKED QUESTIONS - FAQs                   \n\n\n";
  cout << "     1.   Por que devo alugar uma Caixa de Transporte Aéreo - CTA -, pela Doggy's Easy Travel ao invés de comprar uma?\n\n          Porque estudos realizados pela Doggy's Easy Travel comprovam que o aluguel de CTA's pela nossa loja custa, em média, 5 vezes menos do que a compra de uma CTA em outras lojas, sem contar no comodismo de só pegar a CTA quando for realmente precisar, deixando a casa/apartamento sempre limpo e organizado. Além disso, o(a) tutor(a) do doguinho não precisará se precupar em comprar uma nova caixa caso o animalzinho cresça.\n\n\n";
  cout << "     2.   Por que preciso informar as medidas e peso do meu doguinho na hora de alugar a CTA?\n\n          Porque precisamos saber as medidas do seu doguinho para conseguir calcular qual será o tamanho ideal da CTA, permitindo que seu doggy viaje da forma mais confortável possível e respeitando as normas das companhias aéreas sobre voos de animais.\n\n\n";
  cout << "     3.   Por que preciso preencher o meu endereço completo de partida e de destino?\n\n          Porque na Doggy's Easy Travel oferecemos um serviço personalizado visando conforto e praticidade para o(a) cliente. Na Doggy's Easy Travel o(a) cliente recebe a CTA no local preenchido no endereço de partida, além de não precisar devolver a CTA na nossa loja, pois vamos até o(a) cliente buscar a CTA, o mais legal é que tudo isso é feito sem qualquer custo adicional, independentemente da localidade de partida ou de destino. Legal, né?\n\n\n";
  cout << "     4.   Por que a opção de voo na cabine não aparece pra mim?\n\n          Porque, muito provavelmente o seu doguinho não se encaixa nas medidas e peso máximo permitidos para voos na cabine. Apenas os menores doguinhos podem voar na cabine. Caso tenha dúvidas, confira aqui as medidas e peso máximos que um doguinho pode ter para voar na cabine: comprimento de até 30cm, largura de até 27cm,altura de até 15cm e peso máximo de 4kg.\n\n          Se o seu doguinho se encaixa em todas essas medidas simultaneamente e a opção de voo na cabine não apareceu pra você, por favor, entre em contato com o nosso time de suporte. Basta retornar ao menu principal e selecionar a opção 4. Responderemos a sua solicitação o mais breve possível.\n\n\n";
  cout << "     5.   Qual é a documentação necessária para que o meu doguinho possa realizar uma viajem aérea?\n\n          A documentação necessária dependerá do voo ser nacional ou internacional. Para conferir toda a documentação necessária para voos nacionais e internacionais basta retornar ao menu principal selecionar a opção 2.\n\n\n";
  cout << "     6.   Quais são as formas de pagamento aceitas na Doggy's Easy Travel?\n\n          As formas de pagamento aceitas na Doggy's Easy Travel são:\n\n          1. cartão de crédito com opção de parcelamento em até 3x s/ juros\n          2. cartão de débito com desconto de 3% sobre o valor total, sem opção de parcelamento\n          3. PIX com desconto de 5% sobre o valor total, sem opção de parcelamento.\n\n\n";
  cout << "     7.   Qual é o prazo mínimo e o prazo máximo que posso manter uma CTA alugada?\n\n          O prazo mínimo para aluguel de uma CTA é de 1 (um) dia e o prazo máximo é de 60(dias).\n\n\n";
  cout << "     Continua com dúvidas? Tudo bem, volte ao menu principal e selecione a opção 4 (Contato ao Suporte) para saber como prosseguir.";
}

// função de exibição do contato ao suporte
void exibirContatoAoSuporte(std::string nome) {
  int simNaoFAQs;

  do {
    cout << "\n\n\n                          CONTATO AO SUPORTE                          \n\n";
    cout << "     " << nome << ", seja muito bem-vindo(a) ao contato com o time de suporte.\n\n     Ficou com alguma dúvida e não consegue encontrar a resposta na opção 3 (Frequently Asked Questions - FAQs) do menu principal?\n\n";
    cout << "[1] Sim, já fui ao FAQ e não encontrei a resposta de que preciso lá.\n[2] Não, ainda não fui ao FAQ.\n\n";
    cout << "     Digite aqui: ";
    cin >> simNaoFAQs;
  } while (simNaoFAQs < 1 || simNaoFAQs > 2);

    // Bloco de resposta se visitou o FAQs ou não
  switch (simNaoFAQs) {
    case 1:
      cout << "\n\n     Certo, para que possamos te ajudar, envie um e-mail contendo seu nome e a dúvida bem detalhadinha para suportedoggys_et@det.com e te responderemos o quanto antes. Tá bom?\n\n";
      cout << "     Desejamos a você e o seu doguinho um excelente dia!\n\n     Au au auuuuuuu.   :P";
      break;

    case 2:
      cout << "\n\n     Tudo bem, " << nome << ",\n\n";
      cout << "     volte ao menu principal e selecione a opção 3. Se, mesmo após conferir o nosso FAQ você não encontrar a resposta que procura, mande um e-mail contendo o seu nome a sua dúvida bem detalhadinha para suportedoggys_et@det.com e te responderemos o quanto antes. Tá bom?\n\n";
      cout << "     Desejamos a você e o seu doguinho um excelente dia!\n\n     Au au auuuuuuu.   :P";
      break;
  }
}

// função de escolha da opção de pagar com cartão de crédito (só aparece se a pessoa escolher pagar com cartão de crédito)
float cartaoCredito(float precoAluguel) {
  int numeroParcelas;
  float novoPrecoAluguel;

  do{
    cout << "\n     Você escolheu a opção de pagar com cartão de crédito. Nessa opção é possível dividir em até 3x. Escolha em quantas vezes deseja dividir:\n\n";
    cout << "     [1] Não dividir e pagar 1 parcela de R$ " << precoAluguel << "\n";
    cout << "     [2] Dividir em 2x e pagar 2 parcelas de R$ " << precoAluguel / 2 << "\n";
    cout << "     [3] Dividir em 3x e pagar 3 parcelas de R$ " << precoAluguel / 3 << "\n\n";
    cout << "     Digite o número correspondente à sua escolha: ";
    cin >> numeroParcelas;
  } while (numeroParcelas < 0 || numeroParcelas > 3);

  novoPrecoAluguel = precoAluguel / numeroParcelas;  
  cout << "\n     Total\t-\t" << numeroParcelas << "x de R$ " << novoPrecoAluguel;

  return novoPrecoAluguel;
}

// função de escolha de opção de pagar com cartão de débito ou PIX (só aparece se a pessoa escolher pagar com cartão de débito ou PIX)
void formaPagamentoEscolhida(std::string tipoPagamento, float precoAluguel, int porcentagem, float novoPrecoAluguel) {
  cout << "\n     Você escolheu a opção de pagar com " << tipoPagamento << ", ganhando, portanto, um desconto de "<< porcentagem << "%. Sendo assim, o valor passou de R$ " << precoAluguel << " para R$ " << novoPrecoAluguel;
}

// função de escolha entre as 3 formas de pagamento (aparece sempre. após feita essa escolha, será chamada uma das 2 funções anteriores)
void exibirFormaDePagamento(float precoAluguel) {
  int escolhaFormaDePagamento;
  float novoPrecoAluguel;

  do{
    cout << "\n\n     Qual será a forma de pagamento?\n\n";
    cout << "     [1] Cartão de Crédito\t-\ts/ desconto e dividido em até 3x\n     [2] Cartão de Débito\t-\ts/ 3% de desconto e s/ dividir\n     [3] PIX\t\t\t\t-\tc/ 5% de desconto e s/ dividir.\n\n";
    cout << "     Digite o número correspondente à sua escolha: ";
    cin >> escolhaFormaDePagamento;
  } while (escolhaFormaDePagamento < 1 || escolhaFormaDePagamento > 3);

  switch (escolhaFormaDePagamento) {
    case 1:
      novoPrecoAluguel = cartaoCredito(precoAluguel);
      break;

    case 2:
      novoPrecoAluguel = precoAluguel  * 0.97;
      formaPagamentoEscolhida("cartão de débito", precoAluguel, 3, novoPrecoAluguel);
      break;
    
    case 3:
      novoPrecoAluguel = precoAluguel * 0.95;
      formaPagamentoEscolhida("PIX", precoAluguel, 5, novoPrecoAluguel);
      break;
  }

  cout << "\n\n     A Doggy's Easy Travel agradece a preferência.";
}

// função escolha do menu principal
int escolherMenuPrincipal(std::string nome) {
  int menuPrincipal;
  
  do {
    //Bloco de apresentação do menu principal
    cout << "\n\n     " << nome << ", se você deseja fazer uma viagem digna, confortável e acessível tanto para você quanto para o seu doguinho, você realmente veio ao lugar certo.\n";
    cout << "\n     " << "Escolha um número de 1 a 4 para saber mais sobre alguma das opções abaixo.\n\n\n";
    cout << "               MENU PRINCIPAL - Loja Doggy's Easy Travel               \n\n";
    cout << "[1] Aluguel de Caixas de Transporte Aéreo - CTAs\n[2] Documentos necessários para cães realizarem viagens aéreas nacionais e internacionais\n[3] Frequently Asked Questions - FAQs\n[4] Contato ao Suporte\n\n     Digite a opção desejada aqui: ";
    cin >> menuPrincipal;
  } while (menuPrincipal < 1 || menuPrincipal > 4);

  cout << "\n_____________________________________________________________________________________________________________________________________________________________";

  return menuPrincipal;
}

// função escolha de estado
int escolherEstado(char estadosUF[27][3], std::string destinoPartida) {
  int estadoEscolhido; 
  for (int linha = 0; linha < 9; linha++) {
    cout << "[" << linha + 1 << "] "<< estadosUF[linha] << "\t\t\t" << "[" << linha + 10 << "] " << estadosUF[linha + 9] << "\t\t\t" << "[" << linha + 19 << "] " << estadosUF[linha + 18] << "\n";
  }
    
  cout << "\n     Digite o número correspondente ao estado de " << destinoPartida << ": ";
    
  cin >> estadoEscolhido;
  return estadoEscolhido - 1;
}

//função escolha do estado de partida
int escolherEstadoPartida(char estadosUF[27][3]) {
  int estadoPartida;
  do {        
    cout << "\n\n     1º PASSO";
    cout << "\n\n     Para alugar uma CTA para o seu doguinho é necessário que você nos diga de que estado vocês partirão, para que assim direcionemos vocês para o galpão mais próximo.\n\n";
    
    estadoPartida = escolherEstado(estadosUF, "partida");
  } while (estadoPartida < 0 || estadoPartida > 26);

  return estadoPartida;
}

// função escolha do estado de destino
int escolherEstadoDestino(char estadosUF[27][3], int estadoPartida) {
  int estadoDevolucao, estadoDestino;
  do {  
    cout << "\n\n     Agora nos diga se desejará devolver a CTA no estado de destino ou no mesmo estado de partida, na volta da viagem.\n\n[1] Devolver no estado de destino\n[2] Devolver no estado de partida\n\n     Digite a opção desejada aqui: ";
    cin >> estadoDevolucao;
  
    switch (estadoDevolucao) {
      case 1:
        do {
          cout << "\n\n     Já que você optou por devolver a CTA no estado de destino, escolha no menu abaixo o número correspondente à UF do estado de destino:\n\n";

          estadoDestino = escolherEstado(estadosUF, "destino");
        } while (estadoDestino < 0 || estadoDestino > 26);

        cout << "\n\n     Certo, então você vai querer receber a CTA no " << estadosUF[estadoPartida] << " e devolver a CTA no " << estadosUF[estadoDestino] << ".\n\n";
        break;

      case 2:
        estadoDestino = estadoPartida;
        cout << "\n\n     Certo, então você vai querer receber e devolver a CTA no " << estadosUF[estadoPartida] << ".\n\n";
        break;
    }
  } while (estadoDevolucao < 1 || estadoDevolucao > 2);

  return estadoDestino;
}

// função escolha bolsa ou caixa (só aparece se as medidas do doguinho forem as menores)
float escolherCaixaOuBolsa() {
  int cabineOuPorao, caixaOuBolsa;
  float tamanhoCTA;

  cout << "\n     Como o seu doguinho é bem pequenininho você tem a opção de escolher que ele viaje na cabine do avião com você ou no porão. Digite abaixo o número correspondete à opção desejada.\n\n";
  cout << "[1] Viagem na cabine\n[2] Viagem no porão\n\n";
  cout << "     Digite aqui: ";
  cin >> cabineOuPorao;

  // Bloco de decisão entre cabine ou porão - disponível apenas para os menores cachorros
  switch (cabineOuPorao) {
    case 1:
      cout << "\n     Agora você precisa decidir se optará pela caixa de transporte ou pela bolsa de transporte. Digite abaixo o número correspondente à opção desejada.\n\n";
      cout << "[1] Caixa de Transporte\n[2] Bolsa de Transporte\n\n";
      cout << "     Digite aqui: ";
      cin >> caixaOuBolsa;

      // Bloco de decisão entre caixa ou bolsa - disponível apenas para os menores cachorros
      switch (caixaOuBolsa) {
        case 1:
          cout << "\n     A caixa adequada para o seu doguinho é a de Tamanho 1, medindo 36 cm de comprimento x 33 cm de largura x 19 cm de altura e pesando 2 kg.";

          tamanhoCTA = 1;
          break;

        case 2:
          cout << "\n     A bolsa de viagem na cabine possui tamanho único, por isso apenas os menores cachorrinhos podem viajar nela. A bolsa possui as seguintes medidas: 36 cm de comprimento x 33 cm de largura x 23 cm de altura e pesa 1 kg";

          tamanhoCTA = 1.5;
          break;
      }
      break;
    
    case 2:
      cout << "\n     O seu doguinho viajará no porão do avião e a caixa adequada para o seu doguinho é a de Tamanho 1, medindo 36 cm de comprimento x 33 cm de largura x 19 cm de altura e pesando 2 kg.";

      tamanhoCTA = 1;
      break;
  }

  return tamanhoCTA;
}

int main() {
  // Lista de variáveis
  std::string nome; 
  std::string ultimoSobrenome; 
  std::string email; 
  int menuPrincipal, comprimentoDog, larguraDog, alturaDog, cabineOuPorao, caixaOuBolsa, estadoPartida, estadoDestino, simNaoFAQs, diasAluguel; 
  float pesoDog, tamanhoCTA, precoAluguel, novoPrecoAluguel; 
  char estadosUF[27][3] = {"RO", "AC", "AM", "RR", "PA", "AP", "TO", "MA", "PI", "CE", "RN", "PB", "PE", "AL", "SE", "BA", "MG", "ES", "RJ", "SP", "PR", "SC", "RS", "MS", "MT", "GO", "DF"}; 


  // início do código
  cout << "                          DOGGY'S EASY TRAVEL                          \n\n\n";
  cout << "     Prezado(a) cliente,\n\n";
  cout << "     seja muito bem-vindo(a) à Doggy's Easy Travel, a primeira loja do Brasil a se especializar no aluguel de Caixas de Transporte Aéreo - CTA -.\n\n";
  cout << "     Digite o seu primeiro nome para continuar: ";
  cin >> nome;

  cout << "\n_____________________________________________________________________________________________________________________________________________________________";

  menuPrincipal = escolherMenuPrincipal(nome);

  switch (menuPrincipal) {
    case 1:
      estadoPartida = escolherEstadoPartida(estadosUF);

      estadoDestino = escolherEstadoDestino(estadosUF, estadoPartida);
      
      cout << "\n_____________________________________________________________________________________________________________________________________________________________";
      
      cout << "\n\n     2º PASSO";

      cout << "\n\n     Agora precisamos saber algumas medidas e peso do seu doguinho para que possamos te oferecer a Caixa de Transporte aéreo adequada ao tamanho do seu pet e respeitando as normas de transporte aéreo.\n";
      
      cout << "\n     Digite o comprimento (em centímetros) do seu dog: ";
      cin >> comprimentoDog;

      cout << "\n     Digite a largura (em centímetros) do seu dog: ";
      cin >> larguraDog;

      cout << "\n     Digite a altura (em centímetros) do seu dog: ";
      cin >> alturaDog;

      cout << "\n     Digite o peso (em quilos) do seu dog: ";
      cin >> pesoDog;
      cout << fixed << setprecision(1);

      if (comprimentoDog <= 30 && larguraDog <= 27 && alturaDog <= 15 && pesoDog <= 4){
        tamanhoCTA = escolherCaixaOuBolsa();
      }

      else if (comprimentoDog <= 50 && larguraDog <= 38 && alturaDog <= 35 && pesoDog <= 9) {
        cout << "\n     O seu doguinho viajará no porão do avião e a caixa adequada para o seu doguinho é a de Tamanho 2, medindo 53 cm de comprimento x 41 cm de largura x 38 cm de altura e pesando 3 kg.";

        tamanhoCTA = 2;
      } 
        
      else if (comprimentoDog <= 68 && larguraDog <= 52 && alturaDog <= 46 && pesoDog <= 13) {
        cout << "\n     O seu doguinho viajará no porão do avião e a caixa adequada para o seu doguinho é a de Tamanho 3, medindo 71 cm de comprimento x 55 cm de largura x 49 cm de altura e pesando 5 kg.";

        tamanhoCTA = 3;
      } 
      
      else if (comprimentoDog <= 78 && larguraDog <= 54 && alturaDog <= 58 && pesoDog <= 22) {
        cout << "\n     O seu doguinho viajará no porão do avião e a caixa adequada para o seu doguinho é a de Tamanho 4, medindo 81 cm de comprimento x 57 cm de largura x 61 cm de altura e pesando 7 kg.";

        tamanhoCTA = 4;
      } 
        
      else if (comprimentoDog <= 86 && larguraDog <= 61 && alturaDog <= 69 && pesoDog <= 31) {
        cout << "\n     O seu doguinho viajará no porão do avião e a caixa adequada para o seu doguinho é a de Tamanho 5, medindo 89 cm de comprimento x 64 cm de largura x 72 cm de altura e pesando 8.5 kg.";

        tamanhoCTA = 5;
      } 
        
      else if (comprimentoDog <= 110 && larguraDog <= 75 && alturaDog <= 76 && pesoDog <= 40) {
        cout << "\n     O seu doguinho viajará no porão do avião e a caixa adequada para o seu doguinho é a de Tamanho 6, medindo 110 cm de comprimento x 75 cm de largura x 76 cm de altura e pesando 12 kg.";

        tamanhoCTA = 6;
      } 
      
      else {
        cout << "\n     O seu doguinho viajará no porão do avião e a caixa adequada para o seu doguinho é a de Tamanho 7, medindo 122 cm de comprimento x 81 cm de largura x 89 cm de altura e pesando 20 kg.";

        tamanhoCTA = 7;
      }

      do {
        cout << "\n_____________________________________________________________________________________________________________________________________________________________";
        
        cout << "\n\n     3º PASSO";

        cout << "\n\n     Agora precisamos saber por quantos dias você irá querer alugar a caixa.\n\n     Lembrando que o período mínimo para aluguel da CTA é de 1 dia e o período máximo é de 60 dias.\n\n     Digite aqui por quantos dias alugará a CTA: ";
        cin >> diasAluguel;
      } while (diasAluguel < 1 || diasAluguel > 60);

      cout << "\n_____________________________________________________________________________________________________________________________________________________________";
      
      cout << "\n\n     4º PASSO";

      cout << "\n\n     Estamos quase acabando. Agora precisamos que você informe o seu último sobrenome e o seu e-mail para que possamos lhe enviar a confirmação do pedido, a nota fiscal e solicitar o endereço completo de recebimento e coleta da CTA.\n\n     Digite o seu último sobrenome aqui: ";
      cin >> ultimoSobrenome;
      cout << "\n     Digite seu e-mail aqui: ";
      cin >> email;

      cout << "\n_____________________________________________________________________________________________________________________________________________________________";
      
      cout << "\n\n     5º PASSO";

      cout << "\n\n                           RESUMO DO PEDIDO                           \n\n\n";
      
      precoAluguel = exibirPrecoAluguel(tamanhoCTA, diasAluguel);
      
      cout << "     Nome do(a) cliente \n\t\t- " << nome << " " << ultimoSobrenome << "\n";
      cout << "     E-mail do(a) cliente \n\t\t- " << email << "\n";
      
      if (tamanhoCTA == 1.5) {
        cout << "     Tamanho da CTA \n\t\t- Bolsa de Transporte Aéreo Tamanho Único\n";
      } else {
        cout << "     Tamanho da CTA \n\t\t- Caixa de Transporte Aéreo Tamanho " << tamanhoCTA << "\n";
      }
            
      cout << "     Dias de Aluguel \n\t\t- " << diasAluguel << "\n";
      cout << "     UF de recebimento da CTA \n\t\t- " << estadosUF[estadoPartida] << "\n";

      cout << "     UF de coleta da CTA \n\t\t- " << estadosUF[estadoDestino] << "\n";
      cout << "\n     Preço: R$ " << precoAluguel << "\n";

      exibirFormaDePagamento(precoAluguel);
      break;
      
    case 2:
      exibirDocumentosNecessarios();
      break;

    case 3:
      exibirFAQ();
      break;

    case 4:
      exibirContatoAoSuporte(nome);
      break;
  }
  
  return 0;
}