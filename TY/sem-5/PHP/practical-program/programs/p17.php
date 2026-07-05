<!-- 17. Write a PHP script to check whether a number is prime or not. --> 
<html>
	<head>
	</head>
		<body>
			<form method="POST">
				<h3> Enter Value To Check The Prime Number: </h3>
				Enter value:  <input type="text" name="no1"><br>
				<input type="submit" name="check" value="Check Prime Number"><br>
			</form>
			<?php
				if (isset($_POST['check'])) {
					$a = $_POST['no1'];
                    $isprime=true;

                    if($a<=1){
                        $isprime=false;
                    }

                    for($i=2; $i<$a;$i++){
                        if($a%$i==0){
                            $isprime=false;
                            break;
                        }
                    }

                    if($isprime){
                        echo $a." Is A Prime Number";
                    }
                    else{
                        echo $a." Is Not Prime Number";
                    }
				}
			?>
		</body>
</html>