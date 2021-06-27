PREP(addPlate);
PREP(addPlateKeyPress);
PREP(canAddPlate);
PREP(canPressKey);
PREP(createProgressBar);
PREP(deleteProgressBar);
PREP(initAIUnit);
PREP(initPlates);
PREP(showDamageFeedbackMarker);
PREP(updateHPUi);
PREP(updatePlateUi);

if (GVAR(aceMedicalLoaded)) then {
    PREP(handleDamageEhACE);
    PREP(receiveDamageACE);
} else {
    PREP(addActionsToUnit);
    PREP(addPlayerHoldActions);
    PREP(canRevive);
    PREP(drawDownedUnitIndicator);
    PREP(getHitpointArmor);
    PREP(getItemArmor);
    PREP(handleDamageEh);
    PREP(handleHealEh);
    PREP(hasHealItems);
    PREP(hitEh);
    PREP(receiveDamage);
    PREP(setA3Damage);
    PREP(setUnconscious);
    PREP(showDownedSkull);
    PREP(startHpRegen);
};
