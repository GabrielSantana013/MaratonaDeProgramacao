/*
Dodô, Leo e Pepper passam várias madrugadas conversando, em algum lugar do Condomínio Jardim Botânico IV. 
Diversos assuntos astrais ganham pauta nestas conversas homéricas. Nas últimas sessões, 
Dodô tem falado do jogo de RPG que ele e Leo estão inventando, Leo (para “variar”, mas com razão) 
tem falado do gênero musical heavy metal e Pepper ficou fascinado com a história da mitologia grega contada por Leo.

Os garotos resolveram adotar uma estratégia para dividir as sessões igualmente entre os assuntos, 
de modo que eles possam especular cada um ao máximo e chegarem a conclusões astronômicas. 
Eles irão jogar “pedra, papel e tesoura” para decidir o assunto da sessão de hoje, e então irão alternar os assuntos nas próximas sessões. 
Dadas as jogadas de Dodô, Leo e Pepper, nesta ordem, você deve determinar o assunto da sessão de hoje.
*/

#include <iostream>
#include <map>

int main(){

    std::string input;
    std::string dodo = "Os atributos dos monstros vao ser inteligencia, sabedoria...";
    std::string leo = "Iron Maiden's gonna get you, no matter how far!";
    std::string pepper = "Urano perdeu algo muito precioso...";
    std::string empate = "Putz vei, o Leo ta demorando muito pra jogar...";

    std::map<std::string, std::string> jogadas;
    jogadas["papel pedra pedra"] = dodo;
    jogadas["tesoura papel papel"] = dodo;
    jogadas["pedra tesoura tesoura"] = dodo;
    jogadas["pedra papel pedra"] = leo;
    jogadas["papel tesoura papel"] = leo;
    jogadas["tesoura pedra tesoura"] = leo;
    jogadas["pedra pedra papel"] = pepper;
    jogadas["papel papel tesoura"] = pepper;
    jogadas["tesoura tesoura pedra"] = pepper;
;

    while(getline(std::cin, input))
    {
        if(jogadas.find(input) == jogadas.end())
            std::cout << empate << std::endl;
        else
            std::cout << jogadas[input] << std::endl; 
    }

    return 0;
}