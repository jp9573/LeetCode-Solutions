function dec2bin(dec) {
  return (dec >>> 0).toString(2);
}

const hammingDistance = (x, y) => {
  let xBin = dec2bin(x)
  let yBin = dec2bin(y)
  xBin = '0'.repeat(32 - xBin.length) + xBin
  yBin = '0'.repeat(32 - yBin.length) + yBin
  let counter = 0
  for (let i = 0; i < 32; i++) {
    if (xBin[i] !== yBin[i]) counter++
  }
  return counter
}