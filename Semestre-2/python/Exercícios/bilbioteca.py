class Biblioteca():
    def __init__(self, livros_disponiveis,livros_emprestados):
        self.livros_disponiveis=livros_disponiveis
        self.livros_emprestados=livros_emprestados
    def adicionar_livro(self):
        titulo=input('Qual livro você deseja adicionar?')
        self.livros_disponiveis.append(titulo)
    def remover_livro(self):
        while True:
            titulo=input('Qual livro você deseja remover?')
            if titulo in self.livros_disponiveis:
                self.livros_disponiveis.remove(titulo)
                break;
            else:
                print('Livro indisponével')
    def exibir_livros(self):
        print('Livros disponíveis !')
        for livro in self.livros_disponiveis:
            print(f'-> {livro}')
    def emprestimo_livro(self):
        print('Para realizar o emprestimo precisamos te cadastrar!')
        print()
        nome=input('Qual seu nome ? ')
        print()
        while True:
            titulo=input('Qual livro você deseja pegar emprestado ? ')
            if titulo in self.livros_disponiveis:
                self.livros_disponiveis.remove(titulo)
                self.livros_emprestados.append(titulo)
                print(f'Livro {titulo} emprestado para {nome}')
                break;
            else:
                print(f'O livro {titulo} está indisponível para troca !')
    def exibir_livros_emprestados(self):
        print('Livros emprestados !')
        for livro in self.livros_emprestados:
            print(f'-> {livro}')

print("Bem-vindo(a) a Biblioteca!".center(46,'-'))
print()
bib=Biblioteca(livros_disponiveis=['Harry Potter','Persy Jackson', 'Diário de um Banana'],livros_emprestados=['O Senhor dos Anéis'])
bib.adicionar_livro()
print()
bib.exibir_livros()
bib.remover_livro()
print()
bib.exibir_livros()
print()
bib.emprestimo_livro()
print()
bib.exibir_livros_emprestados()
print()
bib.exibir_livros()