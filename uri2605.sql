/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
SELECT products.name, providers.name
FROM products, providers
WHERE products.id_categories = 6 and products.id_providers = providers.id;
