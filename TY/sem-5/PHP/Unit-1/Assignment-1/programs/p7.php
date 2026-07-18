<!-- 7. Write a PHP script to find the sum of a given number. --> 
<html>
	<head>
	</head>
		<body>
			<form method="POST">
				<h3> Enter Value To Get Sum: </h3>
				Enter value <input type="text" name="no1">
				<input type="submit" name="check" value="Print Multiplication of Number"><br>
			</form>
			<?php
				if (isset($_POST['check'])) {
					$a = $_POST['no1'];
                    $sum=0;
                    
                    for ($i=1; $i<=$a; $i++){
                        $sum+=$i;
                    }
                    echo "Sum: ".$sum;
				}
			?>
		</body>
</html>