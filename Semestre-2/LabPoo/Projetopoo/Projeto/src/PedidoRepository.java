import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class PedidoRepository {
    private Map<String, Pedido> pedidos = new HashMap<>(); // Key: Pedido Data/Hora (simple for example)
    private int nextId = 0;

    public void adicionarPedido(Pedido pedido) {
        pedidos.put("pedido_" + nextId++, pedido); // Simulate unique ID
    }

    public Pedido buscarPedidoPorDataHora(String dataHora) {
        // This would require more sophisticated search in a real app,
        // here it's just a placeholder if dataHora is unique key.
        for (Pedido p : pedidos.values()) {
            if (p.getDataHora().equals(dataHora)) {
                return p;
            }
        }
        return null;
    }

    public List<Pedido> listarTodosPedidos() {
        return new ArrayList<>(pedidos.values());
    }

    // In a real scenario, updating a Pedido would involve updating its items and recalculating value
    public void atualizarPedido(String oldDataHora, Pedido updatedPedido) {
        // This is a simplistic update; real systems would use IDs.
        Pedido existing = buscarPedidoPorDataHora(oldDataHora);
        if (existing != null) {
            pedidos.remove(oldDataHora); // Remove old entry
            pedidos.put(updatedPedido.getDataHora(), updatedPedido); // Add new/updated entry
        }
    }

    public void removerPedido(String dataHora) {
        // More complex in a real repo, would remove by ID.
        pedidos.values().removeIf(p -> p.getDataHora().equals(dataHora));
    }
}
