import argparse
import random

def generate_file(num_planes, num_towers, use_delay):
    def generate_plane():
        departure_x = random.randint(0, 1920)
        departure_y = random.randint(0, 1080)
        arrival_x = random.randint(0, 1920)
        arrival_y = random.randint(0, 1080)
        speed = random.randint(25, 75)
        delay = use_delay and random.randint(0, 10) or 0
        return (f"A {departure_x} {departure_y} {arrival_x} {arrival_y} {speed} {delay}\n")

    def generate_tower():
        tower_x = random.randint(0, 1920)
        tower_y = random.randint(0, 1080)
        control_radius = random.randint(50, 200)
        return (f"T {tower_x} {tower_y} {control_radius}\n")

    with open(f"{num_planes}_planes_{num_towers}_towers.rdr", "w") as file:
        for _ in range(num_towers):
            file.write(generate_tower())
        for _ in range(num_planes):
            file.write(generate_plane())

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description = "Generate .rdr file with planes and towers")
    parser.add_argument("-p", "--planes", type = int, help = "Number of planes", required = True)
    parser.add_argument("-t", "--towers", type = int, help = "Number of towers", required = True)
    parser.add_argument("-d", "--delay", action = "store_const", const = 1, default = 0, help = "Delay option")
    args = parser.parse_args()

    if (args.planes <= 0 or args.towers <= 0):
        print("Number of planes and towers must be strictly positive.")
    else:
        generate_file(args.planes, args.towers, args.delay)
        print(f"Generated {args.planes} planes and {args.towers} towers in '{args.planes}_planes_{args.towers}_towers.rdr'")