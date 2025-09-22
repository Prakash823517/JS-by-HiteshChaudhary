// const value can not be further change once it is assigned it is locked
const accountId = 21962
//accountId = 2 //not allowed
let accountEmail = "hitesh@google.com"
var accountPassword = "12345"
accountCity = "jaipur"
let accountState;

accountEmail = "hc@hc.com"
accountPassword = "2121221212"
accountCity = "Bengaluru"

console.log(accountId)

/*
prefer not to use var because of issue in block scope and
functional scope
*/

console.table([accountId, accountEmail, accountPassword, accountCity, accountState])