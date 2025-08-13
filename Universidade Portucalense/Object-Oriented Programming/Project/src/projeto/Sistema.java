package projeto;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.InputMismatchException;
import java.util.Scanner;

/**
 * author 52382
 */
public class Sistema {
	private HashMap <Integer, Estudante> estudantes = new HashMap<>();
	private ArrayList<Material> materiais = new ArrayList<>();
	private ArrayList<Material> materiaisEncontrados = new ArrayList<>();
	private ArrayList<Pedido> pedidos = new ArrayList<>(); 
	Scanner input = new Scanner(System.in);
	int opcao;
	String curso;
	String tipoMaterial;
	String disciplina;
	
	private boolean nomeValido(String nome) {
	    return !nome.matches(".*\\d.*");
	}
	
	public Estudante procurarEstudante(int numero) {
		if (estudantes.containsKey(numero)) {
			return estudantes.get(numero);
		}
		else {
			return null;
		}
	}
	
	public void registarEstudante(int numero) {
		if (estudantes.containsKey(numero)) {
			System.out.println("Estudante já registado.");
			return;
		}
		
		String nome;
		while (true) {
			System.out.println("Nome do Estudante: ");
			nome = input.nextLine();
			if (nomeValido(nome) && !nome.isEmpty()) {
				break;
			}
			else {
				System.out.println("Erro. Por favor insira um nome válido.");
				continue;
			}
		}
		
		String email;
		while (true) {
			System.out.println("Email: ");
			email = input.nextLine();
			boolean emailExiste = false;
			for (Estudante e : estudantes.values()) {
				if (e.getEmail().equalsIgnoreCase(email)) {
					emailExiste = true;
					break;
				}
			}
			if (!email.isEmpty() && email.contains("@") && !emailExiste) {
				break;
			} else if (emailExiste) {
				System.out.println("Erro. Já existe um estudante com esse email.");
				continue;
			} else {
				System.out.println("Erro. Por favor insira um email válido");
				continue;
			}
		}
		
		String password;
		while(true) {
			System.out.println("Password: ");
			password = input.nextLine();
			if (!password.isEmpty()) {
				break;
			}
			else {
				System.out.println("Erro. Por favor insira uma password válida.");
			}
		}
		Estudante estudante = new Estudante(numero,nome,email,password);
		estudantes.put(numero, estudante);
		System.out.println("Estudante registado com sucesso.");
	}
	
	public Estudante login(int numero) {
		Estudante estudante = procurarEstudante(numero);
		if (estudante == null) {
	        System.out.println("Estudante não encontrado.");
	        return null;
	    }

	    boolean logged = false;

	    while (!logged) {
	        System.out.print("Insira a password: ");
	        String password = input.nextLine();

	        if (estudante.getPassword().equals(password)) {
	            logged = true;
	            System.out.println("Login efetuado com sucesso");
	        } else {
	            System.out.println("Password incorreta. Tente novamente");
	        }
	    }
	    return estudante;
	}
	
	public void registarMaterial(String descricao, Estudante estudante) {
		boolean disponibilidade = false;
		if (estudante.procurarMaterialRegisto(descricao) != null) {
			System.out.println("Material já registado.");
			return;
		}
		
		System.out.println("Tipo de Material: ");
		String tipoMaterial = input.nextLine();
		System.out.println("Curso: ");
		String curso = input.nextLine();
		System.out.println("Disciplina: ");
		String disciplina = input.nextLine();
		System.out.println("Disponibilidade (Disponível/Indisponível): ");
		String disponibilidadeString = input.nextLine();
		if (disponibilidadeString.equalsIgnoreCase("Disponível") || disponibilidadeString.equalsIgnoreCase("Disponivel")) {
			disponibilidade = true;
		}
		else {
			disponibilidade = false;
		}
		Material material = new Material (estudante.getNumero(), estudante.getNome(), estudante.getEmail(), 
				descricao, curso, disciplina, tipoMaterial, disponibilidade);
		System.out.println("Material registado com sucesso.");
		materiais.add(material);
		estudante.adicionarMaterial(material);
	}
	
	public boolean removerMaterial(Material material) {
		boolean temPedidosRecolhidos = false;
		for (Pedido pedido : pedidos) {
			if (pedido.getMaterial().equals(material) && pedido.isRecolhido()) {
				temPedidosRecolhidos = true;
				break;
			}
		}
		
		if (temPedidosRecolhidos) {
			return false;
		}
		
		materiais.remove(material);
		ArrayList<Pedido> pedidosParaRemover = new ArrayList<>();
		for (Pedido pedido : pedidos) {
			if (pedido.getMaterial().equals(material)) {
				Estudante requisitante = estudantes.get(pedido.getNumero());
				if (requisitante != null) {
					requisitante.getRequisitados().remove(pedido);
				}
				Estudante doador = estudantes.get(pedido.getnDoador());
				if (doador != null) {
					doador.getDoados().remove(pedido);
				}
				pedidosParaRemover.add(pedido);
			}
		}
		pedidos.removeAll(pedidosParaRemover);
		return true;
	}
	
	public void editarMaterial(Material material) {
		while (true) {
			System.out.println("=== EDITAR MATERIAL ===");
			System.out.println("1. Descrição");
			System.out.println("2. Tipo de Material");
			System.out.println("3. Curso");
			System.out.println("4. Disciplina");
			System.out.println("5. Disponível");
			System.out.println("0. Sair");
			System.out.println("Insira a sua escolha: ");
			try {
				opcao = input.nextInt();
				input.nextLine();
			} catch (InputMismatchException e) {
				System.out.println("Por favor insira uma escolha válida");
				input.nextLine();
				continue;
			}
			
			if (opcao == 1) {
				System.out.println("Nova Descrição: ");
				String novaDescricao = input.nextLine();
				material.setDescricao(novaDescricao);
			}
			else if (opcao == 2) {
				System.out.println("Novo Tipo de Material: ");
				String novoTipoMaterial = input.nextLine();
				material.setTipoMaterial(novoTipoMaterial);
			}
			else if  (opcao == 3) {
				System.out.println("Novo Curso: ");
				String novoCurso = input.nextLine();
				material.setCurso(novoCurso);
			}
			else if (opcao == 4) {
				System.out.println("Nova Disciplina: ");
				String novaDisciplina = input.nextLine();
				material.setDisciplina(novaDisciplina);
			}
			else if (opcao == 5) {
				System.out.println("Nova Disponibilidade (Disponível/Indisponível): ");
				String novaDisponibilidadeString = input.nextLine();
				boolean novaDisponibilidade = false;
				if (novaDisponibilidadeString.equalsIgnoreCase("Disponível") || novaDisponibilidadeString.equalsIgnoreCase("Disponivel")) {
					novaDisponibilidade = true;
				}
				material.setDisponivel(novaDisponibilidade);
			}
			else if (opcao == 0) {
				System.out.println("A sair...");
				break;
			}
			else {
				System.out.println("Por favor insira uma escolha válida.");
			}
		}
	}
	
	public void iniciarPesquisa(Estudante estudante, String descricao) {
		curso = null;
		tipoMaterial = null;
		disciplina = null;
		
		while (true) {
			do {
				System.out.println("\n=== MENU DE PESQUISA ===");
				System.out.println("1. Pesquisar");
				System.out.println("2. Filtrar");
				System.out.println("3. Outra Pesquisa");
				System.out.println("0. Sair");
				System.out.println("Escolha uma opção: ");
				
				try {
					opcao = input.nextInt();
					input.nextLine();
				} catch (InputMismatchException e) {
					System.out.println("Erro. Por favor insira uma escolha válida.");
					input.nextLine();
					continue;
				}
				
				switch(opcao) {
				
				case 0:
					System.out.println("A sair...");
					return;
				case 1:
					boolean foiEfetuado = exibirPesquisa(estudante, descricao, this.curso, this.tipoMaterial, this.disciplina);
					if (foiEfetuado == true) {
						return;
					}
					break;
				case 2:
					boolean foiEfetuadoFiltro = filtrarPesquisa(estudante, descricao);
					if (foiEfetuadoFiltro == true) {
						return;
					}
					break;
				case 3:
					System.out.println("Descrição: ");
					descricao = input.nextLine();
					curso = null;
					tipoMaterial = null;
					disciplina = null;
					continue;
				default:
					System.out.println("Opção inválida.");
					break;
				}
				
			} while (opcao != 0);
			
		}
	}
	
	public boolean filtrarPesquisa(Estudante estudante, String descricao) {
		while (true) {
			System.out.println("\n=== FILTRAR PESQUISA ===");
			System.out.println("1. Curso");
			System.out.println("2. Tipo de Material");
			System.out.println("3. Disciplina");
			System.out.println("0. Sair");
			System.out.println("Escolha uma opção: ");
			
			try {
				opcao = input.nextInt();
				input.nextLine();
			} catch (InputMismatchException e) {
				System.out.println("Erro. Por favor insira uma escolha válida.");
				input.nextLine();
				continue;
			}
			
			switch(opcao) {
			
			case 0:
				System.out.println("A sair...");
				return false;
			case 1:
				System.out.println("Curso: ");
				this.curso = input.nextLine();
				break;
			case 2:
				System.out.println("Tipo de Material: ");
				this.tipoMaterial = input.nextLine();
				break;
			case 3:
				System.out.println("Disciplina: ");
				this.disciplina = input.nextLine();
				break;
			default:
				System.out.println("Opção inválida.");
				break;
			}
			
			System.out.println("\nO que deseja fazer agora?");
	        System.out.println("1. Efetuar Pesquisa");
	        System.out.println("2. Filtrar Novamente");
	        System.out.print("Escolha uma opção: ");

	        try {
				opcao = input.nextInt();
				input.nextLine();
			} catch (InputMismatchException e) {
				System.out.println("Erro. Por favor insira uma escolha válida.");
				input.nextLine();
				continue;
			}
	        
	        if (opcao == 1) {
	        	boolean foiEfetuado = exibirPesquisa(estudante, descricao, this.curso, this.tipoMaterial, this.disciplina);
	        	if (foiEfetuado == true) {
	        		return true;
	        	}
	        }
	        else if (opcao == 2) {
	        	continue;
	        }
	        else {
	        	System.out.println("Opção inválida.");
	        }
		}
	}
	
	public boolean exibirPesquisa(Estudante estudante, String descricao, String curso, String tipoMaterial, String disciplina) {
		boolean encontrado = false;
		int index = 1;
		materiaisEncontrados.clear();
		for (Material material : materiais) {
			boolean matchDescricao = descricao != null && !descricao.isEmpty() && material.getDescricao().equalsIgnoreCase(descricao);
			boolean matchCurso = curso == null || curso.isEmpty() || material.getCurso().equalsIgnoreCase(curso);
			boolean matchDisciplina = disciplina == null || disciplina.isEmpty() || material.getDisciplina().equalsIgnoreCase(disciplina);
			boolean matchTipoMaterial = tipoMaterial == null || tipoMaterial.isEmpty() || material.getTipoMaterial().equalsIgnoreCase(tipoMaterial);
			
			if (matchDescricao || (matchCurso && matchDisciplina && matchTipoMaterial)) {
				System.out.println("\n=== Detalhes do Material " + index +  " ===");
				material.exibirDetalhes();
				System.out.println("============================");
				encontrado = true;
				materiaisEncontrados.add(material);
				index++;
				
			}
		}
		if (!encontrado) {
		    System.out.println("Nenhum material encontrado.");
		} else {
		    while (true) {
		        System.out.println("\nDeseja efetuar um pedido para algum destes materiais? (S/N)");
		        String resposta = input.nextLine();
		        if (resposta.equalsIgnoreCase("S") || resposta.equalsIgnoreCase("Sim")) {
		            while (true) {
		                System.out.println("Indique o número do pedido (0 para sair): ");
		                int escolha;
		                try {
		                	escolha = input.nextInt();
		                	input.nextLine();
		                } catch (InputMismatchException e) {
							System.out.println("Erro. Por favor insira uma escolha válida.");
							input.nextLine();
							continue;
						}
		                if (escolha == 0) {
		                    System.out.println("A sair...");
		                    return false;
		                }
		                if (escolha >= 1 && escolha <= materiaisEncontrados.size()) {
		                    Material material = materiaisEncontrados.get(escolha - 1);
		                    if (material.isDisponivel()) {
		                        if (material.getNumero() != estudante.getNumero()) {
		                            System.out.println("Ponto de Recolha: ");
		                            String pontoRecolha = input.nextLine();
		                            efetuarPedido(estudante, material, pontoRecolha);
		                            material.setDisponivel(false);
		                            return true;
		                        } else {
		                            System.out.println("Não é possível requisitar o seu próprio material.");
		                        }
		                    } else {
		                        System.out.println("Material não disponível.");
		                    }
		                } else {
		                    System.out.println("Opção inválida. Tente novamente.");
		                }
		            }
		        } else if (resposta.equalsIgnoreCase("N") || resposta.equalsIgnoreCase("Não") || resposta.equalsIgnoreCase("Nao")) {
		            return false;
		        } else {
		            System.out.println("Resposta inválida. Por favor responda apenas com S ou N.");
		        }
		    }
		}
		return false;

	}
	
	public void efetuarPedido(Estudante estudante, Material material, String pontoRecolha) {
		Pedido pedido = new Pedido(material, pontoRecolha, pedidos.size() + 1, estudante, false);
		System.out.println("Pedido efetuado com sucesso");
		pedidos.add(pedido);
		estudante.adicionarPedidoRequisitados(pedido);
		Estudante doador = estudantes.get(material.getNumero());
		if (doador != null) {
			doador.adicionarPedidoDoados(pedido);
		}
	}
	
	public void adicionarPedidosEstudante(Estudante estudante) {
		estudante.getRequisitados().clear();
		estudante.getDoados().clear();
		for (Pedido pedido : pedidos) {
			if (pedido.getNumero() == estudante.getNumero()) {
				estudante.adicionarPedidoRequisitados(pedido);
			}
			else if (pedido.getnDoador() == estudante.getNumero()) {
				estudante.adicionarPedidoDoados(pedido);
			}
		}
	}
	
	public void verPedidosRequisitados(Estudante estudante) {
	    int escolha;
	    ArrayList<Pedido> requisitados = estudante.getRequisitados();
	    boolean pedidoEncontrado = estudante.exibirMenuRequisitados();
	    if (!pedidoEncontrado) {
	        return;
	    }

	    Pedido pedidoSelecionado = null;

	    while (true) {
	        System.out.println("\nID do Pedido (0 para sair): ");
	        int idPedido;

	        try {
	            idPedido = input.nextInt();
	            input.nextLine();
	        } catch (InputMismatchException e) {
	            System.out.println("Erro. Por favor insira um número válido.");
	            input.nextLine();
	            continue;
	        }

	        if (idPedido == 0) {
	            return;
	        }

	        pedidoSelecionado = null;
	        for (Pedido p : requisitados) {
	            if (p.getIdPedido() == idPedido) {
	                pedidoSelecionado = p;
	                break;
	            }
	        }

	        if (pedidoSelecionado == null) {
	            System.out.println("Pedido não encontrado. Tente novamente.");
	            continue;
	        }

	        estudante.exibirDetalhesRequisitados(pedidoSelecionado, estudantes);

	        while (true) {
	            System.out.println("\nO que deseja agora fazer?");
	            System.out.println("1. Pesquisar outro pedido");
	            System.out.println("2. Ver os pedidos doados");
	            System.out.println("3. Marcar como recolhido");
	            System.out.println("4. Cancelar pedido");
	            System.out.println("0. Sair");
	            System.out.print("Insira a sua escolha: ");

	            try {
	                escolha = input.nextInt();
	                input.nextLine();
	            } catch (InputMismatchException e) {
	                System.out.println("Erro. Por favor insira uma escolha válida.");
	                input.nextLine();
	                continue;
	            }

	            if (escolha == 0) {
	                return;
	            } 
	            
	            else if (escolha == 1) {
	                break;
	            } 
	            
	            else if (escolha == 2) {
	                verPedidosDoados(estudante);
	                return;
	            } 
	            
	            else if (escolha == 3) {
	                if (!pedidoSelecionado.isRecolhido()) {
	                    pedidoSelecionado.setRecolhido(true);
	                    System.out.println("Pedido marcado como recolhido.");
	                } else {
	                    System.out.println("Este pedido já está marcado como recolhido.");
	                }
	            } 
	            
	            else if (escolha == 4) {
	                if (pedidoSelecionado.isRecolhido()) {
	                    System.out.println("Não é possível cancelar um pedido já recolhido.");
	                } else {
	                    Estudante doador = estudantes.get(pedidoSelecionado.getnDoador());
	                    if (doador != null) {
	                        doador.getDoados().remove(pedidoSelecionado);
	                    }
	                    pedidos.remove(pedidoSelecionado);
	                    requisitados.remove(pedidoSelecionado);
	                    pedidoSelecionado.getMaterial().setDisponivel(true);
	                    System.out.println("Pedido cancelado com sucesso.");
	                }
	                return;
	            } 
	            
	            else {
	                System.out.println("Opção inválida. Tente novamente.");
	            }
	        }
	    }
	}

	public void verPedidosDoados(Estudante estudante) {
		int escolha;
		int idPedido;
		boolean pedidoEncontrado = estudante.exibirMenuDoados();
		ArrayList<Pedido> doados = estudante.getDoados();
		while (true) {
			if (!pedidoEncontrado) {
				return;
			}
			System.out.println("ID do Pedido (0 para sair): ");
			
			try {
				idPedido = input.nextInt();
				input.nextLine();
			} catch (InputMismatchException e) {
				System.out.println("Erro. Por favor insira uma escolha válida.");
				input.nextLine();
				continue;
			}
				
			if (idPedido == 0) {
				return;
			}
			boolean encontrado = false;
			for (Pedido pedido : doados) {
				if (pedido.getIdPedido() == idPedido) {
					estudante.exibirDetalhesDoados(pedido);
					encontrado = true;
					break;
				}
			}
			if (!encontrado) {
				System.out.println("Pedido não encontrado");
			}
			while (true) {
				System.out.println("\nO que deseja agora fazer?");
				System.out.println("1. Pesquisar novamente");
				System.out.println("2. Ver os pedidos requisitados");
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
					return;
				}
				else if (escolha == 1) {
					break;
				}
				else if (escolha == 2) {
					verPedidosRequisitados(estudante);
					return;
				}
				else {
					System.out.println("Opção inválida");
					continue;
				}
			}
		}
	}
	
	public void estatisticasGlobais() {
		System.out.println("Nº Global de Materiais Reutilizados: " + pedidos.size());
	}
}