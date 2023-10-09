encrypt: 
	@gcc -o encrypt encrypt.c 
	@./encrypt $(TYPE) $(FILE_NAME) ||  true
	@echo

decrypt: 
	@gcc -o decrypt decrypt.c
	@./decrypt $(TYPE) $(FILE_NAME) ||  true
	@echo

clean:
	@rm -f encrypt decrypt encrypted_text.txt decrypted_encrypted_text.txt