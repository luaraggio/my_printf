<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>

<h1>Printf</h1>

<h2>Table of Contents</h2>
<ul>
    <li><a href="#introduction">Introduction</a></li>
    <li><a href="#mandatory-part">Mandatory Part</a></li>
    <li><a href="#functions">Functions</a>
        <ul>
            <li><a href="#ft_printf">ft_printf</a></li>
        </ul>
    </li>
    <li><a href="#bonus-part">Bonus Part</a></li>
    <li><a href="#makefile">Makefile</a></li>
    <li><a href="#conclusion">Conclusion</a></li>
</ul>

<h2 id="introduction">Introduction</h2>
<p>
    The <strong>ft_printf</strong> project is an implementation of the <code>printf()</code> function from the C standard library. This library, <code>libftprintf.a</code>, will replicate the behavior of the original <code>printf()</code> function, handling various data types and formatting options.
</p>

<h2 id="mandatory-part">Mandatory Part</h2>
<p>
    The project requires you to write a library that contains the <code>ft_printf()</code> function with the following specifications:
</p>
<ul>
    <li><strong>Program Name:</strong> <code>libftprintf.a</code></li>
    <li><strong>Files to Turn In:</strong> <code>Makefile</code>, <code>*.h</code>, <code>*/ *.h</code>, <code>*.c</code>, <code>*/ *.c</code></li>
    <li><strong>Makefile Targets:</strong> <code>NAME</code>, <code>all</code>, <code>clean</code>, <code>fclean</code>, <code>re</code></li>
    <li><strong>External Functions Used:</strong> <code>malloc</code>, <code>free</code>, <code>write</code>, <code>va_start</code>, <code>va_arg</code>, <code>va_copy</code>, <code>va_end</code></li>
    <li><strong>Libft Authorized:</strong> Yes</li>
</ul>

<h2 id="functions">Functions</h2>
<p>
    The <code>ft_printf()</code> function should have the following prototype:
</p>
<pre><code>int ft_printf(const char *format, ...);</code></pre>

<p>The function must handle the following conversions:</p>
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

<h3 id="ft_printf">ft_printf</h3>
<p>
    <strong>Functionality:</strong> Mimics the original <code>printf()</code> function without implementing the buffer management. The function will compare the output with the original <code>printf()</code> to ensure consistency.
</p>

<h2 id="bonus-part">Bonus Part</h2>
<p>
    Completing the bonus part is optional, and you don’t have to implement all bonuses. The bonus list includes:
</p>
<ul>
    <li>Manage combinations of the following flags: <code>-0.</code> and the field minimum width under all conversions.</li>
    <li>Manage all the following flags: <code>#</code>, <code>+</code>, and <code> </code> (space).</li>
</ul>
<p>
    Note: The bonus part will only be evaluated if the mandatory part is perfect. "Perfect" means that the mandatory part has been integrally completed and works without any issues.
</p>

<h2 id="makefile">Makefile</h2>
<p>
    Ensure your <code>Makefile</code> includes the necessary rules to compile the library, clean object files, and recompile the library when necessary.
</p>

<h2 id="conclusion">Conclusion</h2>
<p>
    The <strong>libftprintf</strong> project is a valuable exercise in understanding variadic functions and formatting output in C. By replicating <code>printf()</code>, you will deepen your knowledge of function pointers and memory management.
</p>

</body>
</html>
