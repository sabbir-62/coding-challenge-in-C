let num = 1;

let multiplicationTable = n => {
    for (i = 1; i <= 10; i++) {
        console.log(`${n} * ${i} = ${n*i}`);
    }
    console.log("\n");
}

while(num <= 10) {
    multiplicationTable(num);
    num++;
}

