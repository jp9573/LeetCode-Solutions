const hashTable = [];
const encode = (longUrl) => {
  hashTable.push(longUrl);
  return "http://tinyurl.com/" + (hashTable.length - 1).toString();
}

const decode = (shortUrl) => {
  let num = shortUrl.split(".com/")
  return hashTable[num[1]]
}