import random
ALTURA=10 #variaveis globais de altura, largura e quantidade de barreiras
LARGURA=10
BARREIRA=15
out=0 #variavel para fechar o programa
quantidade=0 #variavel auxiliar da funçao de colocar as barreiras 
posicaoRobo=[0,0]#marcador da posiçao do robo

tabuleiro=[['-' for _ in range(ALTURA)] for _ in range(LARGURA)]#Criando o tabuleiro
tabuleiro[0][0]='R'#colocando o robo na sua posiçao inicial

posicao_saida = random.sample([(i,j) for i in range(ALTURA) for j in range (LARGURA)], 1)[0]#pegando posiçao aleatoria para a saida
while tabuleiro[posicao_saida[0]][posicao_saida[0]] != 'S':#enquanto nao tiver a saida vai rodar  
    if tabuleiro[posicao_saida[0]][posicao_saida[0]] == '-':#se estiver vazio vai receber a saida
        tabuleiro[posicao_saida[0]][posicao_saida[0]] = 'S'
    else:
        posicao_saida = random.sample([(i,j) for i in range(ALTURA) for j in range (LARGURA)], 1)[0]#se estiver ocupado vai sortear outra posiçao
    

def colocar_barricadas(quantidade):#funçao que vai posicionar as barreiras
    posicoes=random.sample([(i,j) for i in range(ALTURA) for j in range (LARGURA)], 1)[0]#pegando posiçoes aleatorias para as barricadas
    while quantidade < BARREIRA: #loop para colocar todas as barreiras 
        if tabuleiro[posicoes[0]][posicoes[1]] == '-': #se o local tiver vazio ele vai colocar uma barreira
            tabuleiro[posicoes[0]][posicoes[1]] = '#'
            quantidade+=1
            posicoes=random.sample([(i,j) for i in range(ALTURA) for j in range (LARGURA)], 1)[0]#sortear novamente para o proximo loop
        else:#se tiver ocupado ele vai pegar outra posiçao
            posicoes = random.sample([(i,j) for i in range(ALTURA) for j in range (LARGURA)], 1)[0]

def printar_tabuleiro():#funçao para printar o tabuleiro
        for linha in tabuleiro:
            print(' '.join(linha))

colocar_barricadas(quantidade)

print('Bem-vindo a Fuga do Robô!'.center(30,'-'))
print('Ajude o Robô a chegar na Saída')

while out == 0:#interface do usuário
    print()
    printar_tabuleiro()
    
    print('Use W,A,S,D para jogar e Z para sair!')
    try:
        andar = input('Qual caminho você quer seguir?').lower()
    
        print('-'*20)
        
        match(andar):

            case 'w':#se teclar w ele vai para cima , subtraindo 1 no numero de linhas , consecutivamente subindo
                if (posicaoRobo[0]-1) >=0 and (tabuleiro[posicaoRobo[0]-1][posicaoRobo[1]])!= '#':
                    (tabuleiro[posicaoRobo[0]-1][posicaoRobo[1]])='R'
                    posicaoRobo[0]-=1
                    (tabuleiro[posicaoRobo[0]+1][posicaoRobo[1]])='*'
                    
                else:
                    print('não é possível ir para esta posição!'.upper())
            case 's':#se teclar s ele vai para baixo , somando 1 no numero de linhas , consecutivamente descendo
                if (posicaoRobo[0]+1) < ALTURA and (tabuleiro[posicaoRobo[0]+1][posicaoRobo[1]])!= '#':
                    (tabuleiro[posicaoRobo[0]+1][posicaoRobo[1]])='R'
                    posicaoRobo[0]+=1
                    (tabuleiro[posicaoRobo[0]-1][posicaoRobo[1]])='*'
                    
                else:
                    print('não é possível ir para esta posição!'.upper())
            case 'd':#se teclar d ele vai para a direita,somando 1 no numero de colunas , consecutivamente indo uma coluna p direita
                if (posicaoRobo[1]+1) < LARGURA and (tabuleiro[posicaoRobo[0]][posicaoRobo[1]+1])!= '#':
                    (tabuleiro[posicaoRobo[0]][posicaoRobo[1]+1])='R'
                    posicaoRobo[1]+=1
                    (tabuleiro[posicaoRobo[0]][posicaoRobo[1]-1])='*'
                else:
                    print('não é possível ir para esta posição!'.upper())
            case 'a':#se teclar a ele vai para a esquerda,subtraindo 1 no numero de colunas , consecutivamente indo uma coluna para a esquerda
                if (posicaoRobo[1]-1) >=0 and (tabuleiro[posicaoRobo[0]][posicaoRobo[1]-1])!= '#':
                    (tabuleiro[posicaoRobo[0]][posicaoRobo[1]-1])='R'
                    posicaoRobo[1]-=1
                    (tabuleiro[posicaoRobo[0]][posicaoRobo[1]+1])='*'
                else:
                    print('não é possível ir para esta posição!'.upper())
            case 'z':#fechar o programa
                print('\n Obrigado por jogar !')
                out = 999
            case _:# se o usuario digitar algo que nao foi pedido
                print('\nInforme um dos caracteres informados!\n')
    except (ValueError):
        print('\nInforme um dos caracteres informados!\n')
    if tabuleiro[posicaoRobo[0]][posicaoRobo[1]] == tabuleiro[posicao_saida[0]][posicao_saida[0]]:#se o robo chegar no s o jogo acaba
        print('\nParabéns, você conseguiu salvá-lo!!!')
        out=231241
    






    