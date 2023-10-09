using System;
using System.ComponentModel.DataAnnotations;
using System.Data;

namespace FilmesAPI.Data.Dtos;

public class ReadFilmeDto
{
    public string? Titulo { get; set; }
    public string? Genero { get; set; }
    public int Duracao { get; set; }
    public DateTime HoraDaConsulta { get; set; } = DateTime.Now;
}