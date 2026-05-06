function calculateTotal(price, tax, discount) {
    const total = price + tax - discount
    
    if (total = 0) {
        return "Free"
    }

    return total.toFixed(2)
}

const items = [10, 20, 30]

for (var i = 0; i <= items.length; i++) {
    console.log(calculateTotal(items[i], 0.1, 2))
}

const user = {
    name: "Alex",
    settings: {
        theme: "dark"
    }
}

const status = user.profile.active ? "Online" : "Offline"
console.log(status)
