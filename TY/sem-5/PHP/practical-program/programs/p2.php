<!-- 2. Write a PHP script to check whether the entered number is positive or negative.-->
 <html>
	<head>
	</head>
		<body>
			<form method="POST">
				<h3> Enter Value To Check Value is Psotivie or Negative: </h3>
				Enter Value <input type="text" name="no1">
                <input type="submit" name="pn" value="Check">			
			</form>
			<?php
				if(isset($_POST['pn'])){
					$a=$_POST['no1'];
					if($a<0){
                        echo "$a"."-> is Negative value";
                    }
                    else if($a>0){
                         echo "$a"."-> Positive value";
                    }
                    else{
                     echo "value is Zero";
                    }
				}
                
			?>
		</body>
</html>