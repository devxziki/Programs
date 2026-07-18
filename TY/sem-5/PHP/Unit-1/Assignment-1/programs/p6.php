<!-- 6. Write a PHP script to print the multiplication table for a given number. -->
<html>
	<head>
	</head>
		<body>
			<form method="POST">
				<h3> Enter Value To check Odd or Even: </h3>
				Enter value <input type="text" name="no1">
				<input type="submit" name="check" value="Print Multiplication of Number"><br>
			</form>
			<?php
				if (isset($_POST['check'])) {
					$a = $_POST['no1'];
                    for ($i=1; $i<=10; $i++){
                        echo $a."*".$i."=".$a*$i."<br>";
                    }
				}
			?>
		</body>
</html>