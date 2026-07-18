<!-- 16. Write a PHP script to check whether a number is an Armstrong number or not. -->
<html>
	<head>
	</head>
		<body>
			<form method="POST">
				<h3> Enter Value To Check The Armstrong Number: </h3>
				Enter value:  <input type="text" name="no1"><br>
				<input type="submit" name="check" value="Check Armstrong Number"><br>
			</form>
			<?php
				if (isset($_POST['check'])) {
					$a = $_POST['no1'];
                    $sum=0;
                    $t=$a;

                        while($a>0){
                            $d=$a%10;
                            $sum=$sum+($d*$d*$d);
                            $a=(int)($a/10);
                        }

                        if($t==$sum){
                            echo $t." "."is An Armstrong Number";
                        }
                        else{
                            echo $t." "."is Not An Armstrong Number";
                        }
				}
			?>
		</body>
</html>