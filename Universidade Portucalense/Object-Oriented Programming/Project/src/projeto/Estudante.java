package projeto;

import java.util.ArrayList;
import java.util.HashMap;

/**
 * @author 52382
 */
public class Estudante {
	protected int numero;
	protected String nome;
	protected String email;
	private String password;
	private ArrayList<Material> materiaisEstudante = new ArrayList<>();
	private ArrayList<Pedido> doados = new ArrayList<>();
	private ArrayList<Pedido> requisitados = new ArrayList<>();

	public Estudante(int numero, String nome, String email, String password) {
		this.numero = numero;
		this.nome = nome;
		this.email = email;
		this.password = password;
	}

	public String getPassword() {
		return password;
	}

	public void setPassword(String password) {
		this.password = password;
	}

	public int getNumero() {
		return numero;
	}

	public String getNome() {
		return nome;
	}

	public String getEmail() {
		return email;
	}
	
	public void adicionarMaterial(Material material) {
		materiaisEstudante.add(material);
	}
	
	public ArrayList<Material> getMateriais() {
		return materiaisEstudante;
	}
	
	public ArrayList<Pedido> getDoados() {
		return doados;
	}
	
	public ArrayList<Pedido> getRequisitados() {
		return requisitados;
	}
	
	public Material procurarMaterialRegisto(String descricao) {
		for (Material material : materiaisEstudante) {
			if (material.getDescricao().equalsIgnoreCase(descricao)) {
				return material;
			}
		}
		return null;
	}
	
	public void adicionarPedidoRequisitados(Pedido pedido) {
		requisitados.add(pedido);
	}
	
	public void adicionarPedidoDoados(Pedido pedido) {
		doados.add(pedido);
	}
	
	public boolean exibirMenuDoados() {
		if (doados.size() == 0) {
			System.out.println("Nenhum pedido doado encontrado.");
			return false;
		}
		System.out.println("\n===============================");
		System.out.println("         LISTA DE PEDIDOS      ");
		System.out.println("===============================");
		System.out.printf("| %-5s | %-20s |\n", "ID", "Descrição");
		System.out.println("-----------------------------------------");
		for (Pedido pedido : doados) {
		     System.out.printf("| %-5d | %-20s |\n", pedido.getIdPedido(), pedido.getDescricao());
		 }
		 System.out.println("===============================");
		 return true;
	}
	
	public boolean exibirMenuRequisitados() {
		if (requisitados.size() == 0) {
			System.out.println("Nenhum pedido requisitado encontrado.");
			return false;
		}
		System.out.println("\n===============================");
		System.out.println("         LISTA DE PEDIDOS      ");
		System.out.println("===============================");
		System.out.printf("| %-5s | %-20s |\n", "ID", "Descrição");
		System.out.println("-----------------------------------------");
		for (Pedido pedido : requisitados) {
		      System.out.printf("| %-5d | %-20s |\n", pedido.getIdPedido(), pedido.getDescricao());
		 }
		System.out.println("===============================");
		return true;
	}
	
	public void exibirDetalhesDoados(Pedido pedido) {
		System.out.println("\n=== Detalhes do Pedido ===");
		System.out.printf("%-15s: %s%n", "ID", pedido.getIdPedido());
		System.out.printf("%-15s: %s%n", "Descrição", pedido.getDescricao() );
		System.out.printf("%-15s: %s%n", "Tipo de Material", pedido.getTipoMaterial() );
		System.out.printf("%-15s: %s%n", "Curso", pedido.getCurso());
		System.out.printf("%-15s: %s%n", "Disciplina", pedido.getDisciplina());
		System.out.printf("%-15s: %s%n", "Ponto de Recolha", pedido.getPontoRecolha());
		System.out.printf("%-15s: %s%n", "Recolhido", pedido.isRecolhido());
		System.out.printf("Requisitador: %-20s Nº: %-10s Email: %s%n", pedido.getNome(), pedido.getNumero(), pedido.getEmail());
		System.out.println("============================");
	}
	
	public void exibirDetalhesRequisitados(Pedido pedido, HashMap<Integer,Estudante> estudantes) {
		Estudante doador = estudantes.get(pedido.getnDoador());
		String recolhido = "Não";
		System.out.println("\n=== Detalhes do Pedido ===");
		System.out.printf("%-15s: %s%n", "ID", pedido.getIdPedido());
		System.out.printf("%-15s: %s%n", "Descrição", pedido.getDescricao() );
		System.out.printf("%-15s: %s%n", "Tipo de Material", pedido.getTipoMaterial() );
		System.out.printf("%-15s: %s%n", "Curso", pedido.getCurso());
		System.out.printf("%-15s: %s%n", "Disciplina", pedido.getDisciplina());
		System.out.printf("%-15s: %s%n", "Ponto de Recolha", pedido.getPontoRecolha());
		if (pedido.isRecolhido() == true) {
			recolhido = "Sim";
		}
		System.out.printf("%-15s: %s%n", "Recolhido", recolhido);
		System.out.printf("Doador: %-20s Nº: %-10s Email: %s%n", doador.getNome(), doador.getNumero(), doador.getEmail());
		System.out.println("============================");
	}
	
	public void materiaisReutilizadosEstudante() {
		System.out.println("Nº Materiais Requisitados: " + requisitados.size());
		System.out.println("Nº Materiais Doados: " + doados.size());
		int totalReutilizacao = requisitados.size() + doados.size();
		System.out.println("Nº Total de Materiais Reutilizados: " + totalReutilizacao);
	}

	public boolean removerMaterial(Material material) {
		boolean temPedidosRecolhidos = false;
		for (Pedido doado : doados) {
			if (doado.getMaterial().equals(material) && doado.isRecolhido()) {
				temPedidosRecolhidos = true;
				break;
			}
		}
		if (temPedidosRecolhidos) {
			return false;
		}
		materiaisEstudante.remove(material);
		ArrayList<Pedido> pedidosParaRemover = new ArrayList<>();
		for (Pedido doado : doados) {
			if (doado.getMaterial().equals(material)) {
				pedidosParaRemover.add(doado);
			}
		}
		doados.removeAll(pedidosParaRemover);
		return true;
	}
}