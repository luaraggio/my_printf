<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>

<h1>My_printf</h1>
<p>
    This project is an implementation of the <code>printf()</code> function from the C standard library. This library, <code>libftprintf.a</code>, will replicate the behavior of the original <code>printf()</code> function, handling various data types and formatting options.
</p>
<h2 id="functions">Functions</h2>
<pre><code>int my_printf(const char *format, ...);</code></pre>
<ul>
    <li><code>%c</code> - Print a single character.</li>
    <li><code>%s</code> - Print a string.</li>
    <li><code>%p</code> - Print a pointer in hexadecimal format.</li>
    <li><code>%d</code> - Print a decimal (base 10) number.</li>
    <li><code>%i</code> - Print an integer in base 10.</li>
    <li><code>%u</code> - Print an unsigned decimal (base 10) number.</li>
    <li><code>%x</code> - Print a number in lowercase hexadecimal format.</li>
    <li><code>%X</code> - Print a number in uppercase hexadecimal format.</li>
    <li><code>%%</code> - Print a percent sign.</li>
</ul>
<p>
    <strong>Functionality:</strong> Mimics the original <code>printf()</code> function without implementing the buffer management. The function will compare the output with the original <code>printf()</code> to ensure consistency.
</p>
