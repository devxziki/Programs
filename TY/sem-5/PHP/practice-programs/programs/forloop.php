<html>
	<head>
	</head>
		<body>
			<form method="POST">
				<h3> Enter Value for LOOp: </h3>
				<input type="text" name="no1">
                <input type="submit" name="for" value="Run For Loop">			
			</form>
			    <?php
				    if(isset($_POST['for'])){
					    $a=$_POST['no1'];
                        for($i=0;$i<$a;$i++){
                            echo $i;
                        }
                    }      
			    ?>
		</body>
</html>