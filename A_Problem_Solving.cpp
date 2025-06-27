import java.util.*

fun sol() {
val n = readLine()!!.toInt()
val a = IntArray(n)

val input = readLine()!!.split(" ").map { it.toLong() }
for (i in 0 until n) {
a[i] = input[i].toInt()
}

a.sort()
if (a[n - 1] == a[n - 2] + 1) {
println(a[n - 2])
} else {
println("Ambiguous")
}
}

fun main() {
val t = readLine()!!.toInt()
repeat(t) {
sol()
}
}
