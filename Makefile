.PHONY: clean All

All:
	@echo "----------Building project:[ Serenity - Debug ]----------"
	@$(MAKE) -f  "Serenity.mk"
clean:
	@echo "----------Cleaning project:[ Serenity - Debug ]----------"
	@$(MAKE) -f  "Serenity.mk" clean
