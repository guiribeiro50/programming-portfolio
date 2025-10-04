package projeto;

/**
 * @author 52382
 */
public class Material {
	private int numero;
	private String nome;
	private String email;
	private String descricao;
	private String curso;
	private String disciplina;
	private String tipoMaterial;
	private boolean disponivel;

	public Material(int numero, String nome, String email, String descricao,
			String curso, String disciplina, String tipoMaterial, boolean disponivel) {
		this.numero = numero;
		this.nome = nome;
		this.email = email;
		this.descricao = descricao;
		this.curso = curso;
		this.disciplina = disciplina;
		this.tipoMaterial = tipoMaterial;
		this.disponivel = disponivel;
	}

	public String getDescricao() {
		return descricao;
	}

	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}

	public String getCurso() {
		return curso;
	}

	public void setCurso(String curso) {
		this.curso = curso;
	}

	public String getDisciplina() {
		return disciplina;
	}

	public void setDisciplina(String disciplina) {
		this.disciplina = disciplina;
	}

	public String getTipoMaterial() {
		return tipoMaterial;
	}

	public void setTipoMaterial(String tipoMaterial) {
		this.tipoMaterial = tipoMaterial;
	}

	public boolean isDisponivel() {
		return disponivel;
	}

	public void setDisponivel(boolean disponivel) {
		this.disponivel = disponivel;
	}
	
	public int getNumero() {
		return numero;
	}
	
	public void exibirDetalhes() {
		String disponibilidade;
		if (disponivel == true) {
			disponibilidade = "Disponível";
		}
		else {
			disponibilidade = "Indisponível";
		}
		
		System.out.printf("%-15s: %s%n", "Descrição", descricao);
		System.out.printf("%-15s: %s%n", "Tipo de Material", tipoMaterial);
		System.out.printf("%-15s: %s%n", "Curso", curso);
		System.out.printf("%-15s: %s%n", "Disciplina", disciplina);
		System.out.printf("%-15s: %s%n", "Disponibilidade", disponibilidade);
		System.out.printf("Nome: %-20s Nº: %-10s Email: %s%n", nome, numero, email);
		return;
	}
}