<!-- 9. Write a PHP script to find the greatest number among three numbers. --> 
<html>
	<head>
	</head>
		<body>
			<form method="POST">
				<h3> Enter Value To Get Gretaest Value: </h3>
				Enter value 1:  <input type="text" name="no1"><br>
                Enter value 2:  <input type="text" name="no2"><br>
                Enter value 3:  <input type="text" name="no3"><br>
				<input type="submit" name="check" value="Check Greatest Value among all this 3 Values "><br>
			</form>
			<?php
				if (isset($_POST['check'])) {
					$a = $_POST['no1'];
                    $b = $_POST['no2'];
                    $c = $_POST['no3'];

                    if($a > $b && $a > $c ){
                        echo $a." > is Greater";
                    }
                    elseif ($b > $a && $b> $c){
                        echo $b." > is Greater";
                    }
                    else{
                        echo $c." > is Greater";
                    }
				}
			?>
		</body>
</html>