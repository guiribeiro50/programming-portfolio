package projeto;

import java.util.InputMismatchException;
import java.util.Scanner;

/**~
 * @author 52382
 */
public class Menu {
	public static void main(String[] args) {
		Sistema sistema = new Sistema();
		Scanner input = new Scanner(System.in);
		int opcao = -1;

		while (true) {
			boolean logged = false;
			Estudante estudante = null;

			while (!logged) {
				System.out.println("\n=== LOGIN E REGISTO ===");
				System.out.println("1. Registar Estudante");
				System.out.println("2. Login Estudante");
				System.out.println("0. Sair");
				System.out.print("Insira a sua escolha: ");
				
				try {
					opcao = input.nextInt();
					input.nextLine();
				} catch (InputMismatchException e) {
					System.out.println("Erro. Por favor insira uma escolha válida.");
					input.nextLine();
					continue;
				}

				switch (opcao) {
					case 1: {
						int numeroEstudante;
						while (true) {
							System.out.println("Número de Estudante: ");
							try {
								numeroEstudante = input.nextInt();
								input.nextLine();
								break;
							} catch(InputMismatchException e) {
								System.out.println("Erro. Por favor insira um número válido.");
								input.nextLine();
							}
						}
						sistema.registarEstudante(numeroEstudante);
						break;
					}
					case 2: {
						int numero;
						while (true) {
							System.out.println("Número de Estudante: ");
							try {
								numero = input.nextInt();
								input.nextLine();
								break;
							} catch(InputMismatchException e) {
								System.out.println("Erro. Por favor insira um número válido.");
								input.nextLine();
							}
						}
						estudante = sistema.login(numero);
						if (estudante != null) {
							logged = true;
						} 
						else {
							System.out.println("Erro ao efetuar login.");
						}
						break;
					}
					case 0: {
						System.out.println("A sair...");
						System.exit(0);
						break;
					}
					default: {
						System.out.println("Opção inválida.");
						break;
					}
				}
			}

			do {
				System.out.println("\n---- MENU PRINCIPAL -----");
				System.out.println("1. Registar Materiais");
				System.out.println("2. Pesquisar Materiais / Efetuar Pedidos");
				System.out.println("3. Remover Materiais");
				System.out.println("4. Editar Materiais");
				System.out.println("5. Ver Pedidos");
				System.out.println("6. Ver estatísticas de reutilização");
				System.out.println("0. Logout");
				System.out.println("Escolha uma opção: ");

				try {
					opcao = input.nextInt();
					input.nextLine();
				} catch (InputMismatchException e) {
					System.out.println("Erro. Por favor insira uma escolha válida.");
					input.nextLine();
					continue;
				}

				switch (opcao) {
				
					case 1: {
						System.out.println("Descrição: ");
						String descricao = input.nextLine();
						sistema.registarMaterial(descricao, estudante);
						break;
					}
					
					case 2: {
						System.out.println("Descrição: ");
						String descricao = input.nextLine();
						sistema.iniciarPesquisa(estudante, descricao);
						break;
					}
					
					case 3:{
						System.out.println("Descrição: ");
						String descricao = input.nextLine();
						Material material = estudante.procurarMaterialRegisto(descricao);
						if (material != null) {
							boolean removidoEstudante = estudante.removerMaterial(material);
							boolean removidoSistema = sistema.removerMaterial(material);
							if (removidoEstudante && removidoSistema) {
								System.out.println("Material removido com sucesso.");
							} else {
								System.out.println("Erro: Não é possível remover material com pedidos já recolhidos.");
							}
						}
						else {
							System.out.println("Material não encontrado.");
						}
						break;
					}
					case 4:{
						System.out.println("Descrição: ");
						String descricao = input.nextLine();
						Material material = estudante.procurarMaterialRegisto(descricao);
						if (material != null) {
							sistema.editarMaterial(material);
						}
						else {
							System.out.println("Material não encontrado.");
						}
						break;
					}
					
					case 5:{
						int escolha;
						sistema.adicionarPedidosEstudante(estudante);
						System.out.println("\nDeseja ver pedidos:");
						System.out.println("1. Doados");
						System.out.println("2. Requisitados");
						System.out.println("Insira a sua escolha: ");
						try {
							escolha = input.nextInt();
							input.nextLine();
						} catch (InputMismatchException e) {
							System.out.println("Erro. Por favor insira uma escolha válida.");
							input.nextLine();
							continue;
						}
						if (escolha == 1) {
							sistema.verPedidosDoados(estudante);
						}
						else if(escolha == 2) {
							sistema.verPedidosRequisitados(estudante);
						}
						else {
							System.out.println("Opção inválida");
						}
						break;
					}
					
					case 6:{
						while (true) {
							int escolha;
							System.out.println("\nDeseja ver quais estatísticas: ");
							System.out.println("1. Suas estatísticas");
							System.out.println("2. Estatísticas globais");
							System.out.println("0. Sair");
							System.out.println("Insira a sua escolha: ");
							try {
								escolha = input.nextInt();
								input.nextLine();
							} catch (InputMismatchException e) {
								System.out.println("Erro. Por favor insira uma escolha válida.");
								input.nextLine();
								continue;
							}
							if (escolha == 0) {
								break;
							}
							else if (escolha == 1) {
								estudante.materiaisReutilizadosEstudante();
							}
							else if(escolha == 2) {
								sistema.estatisticasGlobais();
							}
							else {
								System.out.println("Opção inválida");
							}
						}
						break;
					}
					
					case 0: {
						System.out.println("Logout efetuado com sucesso.");
						break;
					}
					
					default: {
						System.out.println("Opção inválida.");
					}
				}
			} while (opcao != 0);
		}
	}
}