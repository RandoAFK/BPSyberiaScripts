class DZ_LightAI;
class AnimalBase : DZ_LightAI
{
    storageCategory = 3;
    knifeDamageModifier = 1;
};

class Animal_GallusGallusDomesticus : AnimalBase
{
    knifeDamageModifier = 0.25;
};

class Animal_GallusGallusDomesticusF : AnimalBase
{
    knifeDamageModifier = 0.25;
};

class Animal_BosTaurus : AnimalBase
{
    knifeDamageModifier = 1.5;
};

class Animal_BosTaurusF : AnimalBase
{
    knifeDamageModifier = 1.5;
};

class Animal_UrsusArctos : AnimalBase
{
    knifeDamageModifier = 2.0;
};
class DeadChicken_ColorBase: Edible_Base
{
    storageCategory=3;
    knifeDamageModifier=0.25;
    skinTimeModifier = 0.5;
    class Skinning
    {
        class ObtainedSteaks
        {
            item="ChickenBreastMeat";
            count=2;
            quantityMinMaxCoef[]={0.5,1};
        };
        class ObtainedFeathers
        {
            item="ChickenFeather";
            count=2;
            quantityMinMaxCoef[]={0.5,1};
            transferToolDamageCoef=1;
        };
        class ObtainedGuts
        {
            item="SmallGuts";
            count=0;
            quantityMinMaxCoef[]={0.5,0.80000001};
        };
        class ObtainedBones
        {
            item="Bone";
            count=1;
            quantityMinMaxCoef[]={0.2,0.30000001};
            transferToolDamageCoef=1;
        };
    };
};

class DeadRabbit: Edible_Base
{
    storageCategory=3;
    knifeDamageModifier=0.25;
    skinTimeModifier = 0.5;
    class Skinning
    {
        class ObtainedSteaks
        {
            item="RabbitLegMeat";
            count=2;
            quantityMinMaxCoef[]={0.5,1};
        };
        class ObtainedPelt
        {
            item="RabbitPelt";
            count=1;
            quantityCoef = 1;
            transferToolDamageCoef=1;
        };
        class ObtainedGuts
        {
            item="SmallGuts";
            count=0;
            quantityMinMaxCoef[]={0.5,0.80000001};
        };
        class ObtainedBones
        {
            item="Bone";
            count=1;
            quantityMinMaxCoef[]={0.2,0.30000001};
            transferToolDamageCoef=1;
        };
    };
};
class Carp : Edible_Base
{
    storageCategory = 3;
    knifeDamageModifier = 0.25;
    skinTimeModifier = 0.25;
    class Skinning
    {
        class ObtainedSteaks
        {
            item = "CarpFilletMeat";
            count = 2;
            quantityMinMaxCoef[] = { 0.5,1 };
        };
        class ObtainedGuts
        {
            item = "SmallGuts";
            count = 0;
            quantityMinMaxCoef[] = { 0.5,0.8 };
        };
    };
};
class Mackerel : Edible_Base
{
    storageCategory = 3;
    knifeDamageModifier = 0.25;
    skinTimeModifier = 0.25;
    class Skinning
    {
        class ObtainedSteaks
        {
            item = "MackerelFilletMeat";
            count = 2;
            quantityMinMaxCoef[] = { 0.5,1 };
        };
        class ObtainedGuts
        {
            item = "SmallGuts";
            count = 0;
            quantityMinMaxCoef[] = { 0.5,0.8 };
        };
    };
};
