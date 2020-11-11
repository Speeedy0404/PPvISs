#pragma once
#include <iostream>
#include <string>

using namespace std;
namespace animal {
	class Living_entities
	{
	protected:
		string orial_habitat;
		int long_of_life;
	public:

		void get_orial_habitat(string orial) { orial_habitat = orial; }
		void get_long_of_life(int life) { long_of_life = life; }


		string set_orial_habitat() { return  orial_habitat; }
		int set_long_of_life() { return long_of_life; }
		virtual void view() = 0;
	};
	//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class Animals :virtual public Living_entities
	{
	protected:
		string cover;
		double weight;
	public:
		void get_cover(string cover_animal) { cover = cover_animal; }
		void get_weight(double weight_animal) { weight = weight_animal; }

		string set_cover() { return  cover; }
		double set_weight() { return weight; }

	};
	//млекопитающиеся
	class Mammalia : public Animals
	{
	protected:
		string the_presence_of_mammary_glands;

	public:
		void get_the_presence_of_mammary_glands(string glands) { the_presence_of_mammary_glands = glands; }

		string set_the_presence_of_mammary_glands() { return the_presence_of_mammary_glands; }
	};
	//земноводные
	class Amphibia : public Animals
	{
	protected:
		string respiratory_system;
		string integument;

	public:
		void get_respiratory_system(string system) { respiratory_system = system; }
		void get_integument(string integument_amphibia) { integument = integument_amphibia; }

		string set_respiratory_system() { return respiratory_system; }
		string set_integument() { return integument; }
	};
	//пресмыкающиеся
	class Reptilia : public Animals
	{
	protected:
		string scales;
		string moult;

	public:
		void get_scales(string scales_reptilia) { scales = scales_reptilia; }
		void get_moult(string moult_reptilia) { moult = moult_reptilia; }

		string set_scales() { return scales; }
		string set_moult() { return moult; }
	};

	//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class Birds :virtual public Living_entities
	{
	protected:
		string wings;
		string feather_cover;

	public:
		void get_wings(string  wings_birds) { wings = wings_birds; }
		void get_feather_cover(string feather_cover_birds) { feather_cover = feather_cover_birds; }

		string set_wings() { return   wings; }
		string set_feather_cover() { return feather_cover; }

	};
	//гусеобразные
	class Anseriformes : public Birds
	{
	protected:
		string flat_beak;
		string webbings_on_the_feet;

	public:
		void get_flat_beak(string  beak) { flat_beak = beak; }
		void get_webbings_on_the_feet(string webbings) { webbings_on_the_feet = webbings; }

		string set_flat_beak() { return   flat_beak; }
		string set_webbings_on_the_feet() { return webbings_on_the_feet; }

	};

	//куринообразные
	class Chicken_like : public Birds
	{
	protected:
		string strong_paws;
		string feet_with_a_swimming_membrane;

	public:
		void get_strong_paws(string  paws) { strong_paws = paws; }

		string set_strong_paws() { return  strong_paws; }


	};
	//воробьинообразные
	class Passeriformes : public Birds
	{
	protected:
		string small_and_medium_sized;
		string feet_with_a_swimming_membrane;

	public:
		void get_small_and_medium_sized(string  sized) { small_and_medium_sized = sized; }

		string set_small_and_medium_sized() { return  small_and_medium_sized; }

	};

	//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class Fish :virtual public Living_entities
	{
	protected:
		string scaly_cover;
		string fins;
	public:
		void get_scaly_cover(string scaly_cover_fish) { scaly_cover = scaly_cover_fish; }
		void get_fins(string fins_fish) { fins = fins_fish; }

		string set_scaly_cover() { return  scaly_cover; }
		string set_fins() { return fins; }

	};
	//скаты
	class Batomorphi : public Fish
	{
	protected:
		string flattened_body;
	public:
		void get_flattened_body(string bodys) { flattened_body = bodys; }

		string set_flattened_body() { return  flattened_body; }
	};
	//карпообразные
	class Cypriniformes : public Fish
	{
	protected:
		string availability_of_webers_device;

	public:
		void get_availability_of_webers_device(string device) { availability_of_webers_device = device; }

		string set_availability_of_webers_device() { return  availability_of_webers_device; }
	};
	//осетровые
	class Acipenseridae : public Fish
	{
	protected:
		string body_is_elongated;

	public:
		void get_body_is_elongated(string form) { body_is_elongated = form; }

		string set_body_is_elongated() { return  body_is_elongated; }
	};
	//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class Herbivorous
	{
	protected:
		string adaptability_of_teeth_for_grass;
		string location_of_the_eye;

	public:
		void get_adaptability_of_teeth_for_grass(string adaptability_herbivorous) { adaptability_of_teeth_for_grass = adaptability_herbivorous; }
		void get_location_of_the_eye(string location) { location_of_the_eye = location; }

		string set_adaptability_of_teeth_for_grass() { return  adaptability_of_teeth_for_grass; }
		string set_location_of_the_eye() { return   location_of_the_eye; }
	};


	class Predators
	{
	protected:
		string adaptability_of_teeth_for_meat;
		string strong_claws;

	public:
		void get_adaptability_of_teeth_for_meat(string adaptability_predators) { adaptability_of_teeth_for_meat = adaptability_predators; }
		void get_strong_claws(string claws) { strong_claws = claws; }

		string set_adaptability_of_teeth_for_meat() { return   adaptability_of_teeth_for_meat; }
		string set_strong_claws() { return  strong_claws; }

	};

	class Omnivores :public Predators, public Herbivorous
	{

	protected:

	public:

	};
	//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//объединение нескольких классов
	class Cheiroptera : virtual Animals, virtual Birds, Predators
	{

	protected:

	public:
		void get_orial_habitat(string orial) { orial_habitat = orial; }
		void get_long_of_life(int life) { long_of_life = life; }
		void get_cover(string cover_animal) { cover = cover_animal; }
		void get_weight(double weight_animal) { weight = weight_animal; }
		void get_wings(string  wings_birds) { wings = wings_birds; }
		void get_feather_cover(string feather_cover_birds) { feather_cover = feather_cover_birds; }
		void get_adaptability_of_teeth_for_meat(string adaptability_predators) { adaptability_of_teeth_for_meat = adaptability_predators; }
		void get_strong_claws(string claws) { strong_claws = claws; }
		string set_orial_habitat() { return  orial_habitat; }
		int set_long_of_life() { return long_of_life; }
		string set_cover() { return  cover; }
		double set_weight() { return weight; }
		string set_wings() { return   wings; }
		string set_feather_cover() { return feather_cover; }
		string set_adaptability_of_teeth_for_meat() { return   adaptability_of_teeth_for_meat; }
		string set_strong_claws() { return  strong_claws; }
		void view();
	};

	class Penguins : virtual public Animals, virtual public Birds, public Predators
	{
	protected:
		string musculature;
		string feet_with_a_swimming_membrane;

	public:
		void get_musculature(string  musculature_penguin) { musculature = musculature_penguin; }
		void get_feet_with_a_swimming_membrane(string feet) { feet_with_a_swimming_membrane = feet; }

		string set_musculature() { return  musculature; }
		string set_feet_with_a_swimming_membrane() { return feet_with_a_swimming_membrane; }
		void view();
	};

	class Sharks :virtual public Animals, virtual public Fish, public Predators
	{
	protected:
		string body_is_torpedo_shaped;
		string lost_of_sharp_teeth;
	public:
		void get_body_is_torpedo_shaped(string body) { body_is_torpedo_shaped = body; }
		void get_lost_of_sharp_teeth(string teeth) { lost_of_sharp_teeth = teeth; }

		string set_body_is_torpedo_shaped() { return  body_is_torpedo_shaped; }
		string set_lost_of_sharp_teeth() { return  lost_of_sharp_teeth; }
		void view();
	};

	class Parrot : virtual public Birds, virtual  public Animals, public Herbivorous
	{
	protected:
		string bright_colouring;
		string long_tails_and_tufts;
	public:
		void get_bright_colouring(string colouring) { bright_colouring = colouring; }
		void get_long_tails_and_tufts(string tails_and_tufts) { long_tails_and_tufts = tails_and_tufts; }

		string set_bright_colouring() { return  bright_colouring; }
		string set_long_tails_and_tufts() { return  long_tails_and_tufts; }
		void view();
	};

	class Whale : public Fish, public Mammalia, public Omnivores
	{
	protected:
		double the_largest_size_among_animals;

	public:
		void get_the_largest_size_among_animals(double size) { the_largest_size_among_animals = size; }

		double set_the_largest_size_among_animals() { return  the_largest_size_among_animals; }
	};
}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

