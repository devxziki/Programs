<!-- 13. Write a PHP script to find the factorial of a number. --> 
<html>
	<head>
	</head>
		<body>
			<form method="POST">
				<h3> Enter Value To Get Factorial Number: </h3>
				Enter value:  <input type="text" name="no1"><br>
				<input type="submit" name="check" value="Get Factorial "><br>
			</form>
			<?php
				if (isset($_POST['check'])) {
					$a = $_POST['no1'];
                    $fact=1;

                    for ($i=1; $i<=$a; $i++){
                        $fact=$fact*$i;
                    }
                    echo "Factorial of :".$a."is"."".$fact;
				}
			?>
		</body>
</html>