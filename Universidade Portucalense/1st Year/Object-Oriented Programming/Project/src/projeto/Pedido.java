package projeto;

/**
 * @author 52382
 */
public class Pedido {
	private Material material;
	private String pontoRecolha;
	private int idPedido;
	private Estudante requisitante;
	private boolean recolhido;
	
	public Pedido(Material material, String pontoRecolha, int idPedido, Estudante requisitante, boolean recolhido) {
		this.material = material;
		this.pontoRecolha = pontoRecolha;
		this.idPedido = idPedido;
		this.requisitante = requisitante;
		this.recolhido = recolhido;
	}
	
	public int getNumero() {
		return requisitante.getNumero();
	}
	
	public String getNome() {
		return requisitante.getNome();
	}
	
	public String getEmail() {
		return requisitante.getEmail();
	}
	
	public String getDescricao() {
		return material.getDescricao();
	}
	
	public String getCurso() {
		return material.getCurso();
	}
	
	public String getDisciplina() {
		return material.getDisciplina();
	}
	
	public String getTipoMaterial() {
		return material.getTipoMaterial();
	}
	
	public String getPontoRecolha() {
		return pontoRecolha;
	}
	
	public void setPontoRecolha(String pontoRecolha) {
		this.pontoRecolha = pontoRecolha;
	}
	
	public int getnDoador() {
		return material.getNumero();
	}
	
	public int getIdPedido() {
		return idPedido;
	}
	
	public boolean isRecolhido() {
		return recolhido;
	}
	
	public void setRecolhido(boolean recolhido) {
		this.recolhido = recolhido;
	}
	
	public Material getMaterial() {
		return material;
	}
}